/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */


#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */


int my_compare_strings(char string1[], char string2[]) {

  

fgets(string1,LEN,stdin);
fgets(string2, LEN, stdin);

int length1, length2;

length1 = strlen(string1);
length2 = strlen(string2);

  int i,j;
  int lengthCompare;

 if(length2 == length1){
        lengthCompare = length1;
   }
  
  if(length1 < length2){
    lengthCompare = length2;
  }

  if(length2 < length1){
     lengthCompare = length1;
   } 

    for(i = 0; i<lengthCompare; i++){
         if(string1[i] < string2[i]){
 
               return -1;
           }
          if (string1[i] > string2[i]){

             return 1;
          }


    }

// if it passes through the for loop and hasn't returned anything, that means they are identical but may have different
// lengths for the strings
        if( length1 < length2){
	     return -1;
           }
       if( length2 < length1){
              return 1;
            }

             return 0;
             //last case scenario is 0 which means they are the exact same string 



}


void my_swap_strings(char string1[], char string2[]) {
  char swapper;    // char variable used in swapping one character at a time


  int length1, length2;
  int i,j;
  int maxLength;

  length1 = strlen(string1);
  length2 = strlen(string2);

 if(length1 == length2) {

     maxLength = length1;
// the strings are the same length
   }
  if(length1 < length2){
    maxLength = length2;
 }
  if(length1 > length2){
    maxLength = length1;
   }



    for(i=0;i<=maxLength;i++){
        swapper = string1[i];
        string1[i] = string2[i];
        string2[i] = swapper;
    }


}


int main()
{
  char Strings[NUM][LEN];

  printf("Please enter %d strings, one per line:\n", NUM);

      int i;
	for(i=0; i<NUM;i++){
	   fgets(Strings[i], LEN, stdin);
        }



  puts("\nHere are the strings in the order you entered:");

  /* Write a for loop here to print all the strings. */
    int j;
    for(int j=0; j<NUM;j++){
        printf("%s",Strings[j]);
    }
  

        int l = 0;
	int m = 0;
        int swapped;
	int p = 0;
	int counter = 0;
while(counter < 24){
//outside while loop will check every string index inside the Strings array
      m = counter;

      while(m < 25){
//	for(m=count;m< 24; m++){
 // outer for loop will make sure it compares every string in the array 

           for(p=1+counter; p<25;p++){
		// inner for loop compares every string without having it change to the next index before going
                // going through the whole array first
		swapped = my_compare_strings(Strings[m],Strings[p]);
                //swapped will either give -1, 0, or 1
		if(swapped == 1){
                    // only swap if it equals 1 because that means the first string needs to come after the second string
                       my_swap_strings(Strings[m],Strings[p]);
                 }
            }
           m++;
         }
counter++;
//increment counters to avoid infinite loops
}



  /* Output sorted list */

  puts("\nIn alphabetical order, the strings are:");
  /* Write a for loop here to print all the strings. Feel free to use puts/printf
     etc. for printing each string.
  */
     int k;
    for(k=0; k<NUM;k++){
        printf("%s",Strings[k]);
     }
}
