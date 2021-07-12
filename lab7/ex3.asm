#---------------------------------
# Lab 7: Pixel Conversion
#
# --------------------------------
# Below is the expected output.
# 
# Converting pixels to grayscale:
# 0
# 1
# 2
# 34
# 5
# 67
# 89
# Finished.
# -- program is finished running --
#---------------------------------

.data 0x0
  startString:  .asciiz "Converting pixels to grayscale:\n"
  finishString: .asciiz "Finished.\n"
  newline:      .asciiz "\n"
  pixels:       .word   0x00010000, 0x010101, 0x6,      0x3333,
                        0x030c,     0x700853, 0x294999, -1

.text 0x3000

main:
                        # prints "converting pixels to grayscale" message
  addi $v0, $0, 4       	# system call code 4 for printing a string
  la   $a0, startString      	# put address of startString in $a0
  syscall               	# print the string


#addi $15, $zero, -1        #will be used to compare -1 to see when array ends
addi $9, $zero, 0           # i variable for loop counter

while:
  lw $8, pixels($9)           #load pixel at the i index
  beq $8, -1, exit            # if it is equal to -1, exit. Otherwise move on to rest of code
 #  bne $8, -1, noNeg
  
 # noNeg:
  #srl $a0, $8, 24
  andi $a0, $8, 0x000000FF # getting the hexit values of pixel value
 
 
  andi $a1, $8, 0x0000ff00
  andi $a2, $8, 0x00ff0000
  
  srl $a2, $a2, 16
   srl $a1, $a1, 8
  

  
  jal rgb_to_gray               #Calculates gray pixel value
  
                               #print gray pixel, an integer so it's 1
  li $v0, 1
  add $a0, $zero, $12
  syscall
  
     				# Print a newline
  addi 	$v0, $0, 4  			# system call 4 is for printing a string
  la 	$a0, newline 			# address of areaIs string is in $a0
  syscall           			# print the string
  
  addi $9, $9, 4               #increment i variable for loop counter
   
  j while                      # goes back to loop again


#------------ END CODE ---------------


exit:

  addi $v0, $0, 4         # system call code 4 for printing a string
  la   $a0, finishString  # put address of finishString in $a0
  syscall               	# print the string

  addi $v0, $0, 10      	# system call code 10 for exit
  syscall               	# exit the program



#----------------------------------------------------------#



#---- Procedure rgb_to_gray ----#
#
#
#-------------------------------#

rgb_to_gray:            # procedure to calculate gray = (red + green + blue) / 3
                        # red is in $a0, green is in $a1, blue is in $a2
                        # gray should be computed in $v0 (return value)
                        # there is no need to use a stack

addi $14, $zero, 3
add $10, $a0, $a1
add $11, $10, $a2
#div $12, $11, $14
div $11, $14
mflo $12                # has the quotient
mfhi $15                # has the remainder

  jr $ra               # return to main
