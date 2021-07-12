/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */

#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */


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
  

	char tempstring[LEN];
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

           for(p=1+counter; p<NUM;p++){
		// inner for loop compares every string without having it change to the next index before going
                // going through the whole array first
		swapped = strcmp(Strings[m],Strings[p]);
                //swapped will either give -1, 0, or 1
		if(swapped > 0 ){
                    // only swap if it equals 1 because that means the first string needs to come after the second string
                       strcpy(tempstring,Strings[p]);
			strcpy(Strings[p],Strings[m]);
			strcpy(Strings[m],tempstring);
                 }
            }
           m++;
         }
counter++;

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

