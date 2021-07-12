#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], c;
  int i;
  int lowercase, uppercase, digits, other;
  int length;

  puts("Type some text (then ENTER):");


fgets(text, MAX, stdin);

length = strlen(text)-1;


 printf("Your input in reverse is:\n");
 int a;

 for(a=length-1;a>=0;a--){
   printf("%c",text[a]);
 }
   printf("\n");

int num = 0;
for(num =0; num<length;num++){
 text[num] = tolower(text[num]);
//This converts it all to lowercase 
}

int b = 0;
int check = 1;
// check is like a boolean variable

 while(b<length){
    while(!isalnum(text[b]) && b<length){
      b++;
    //As long as the character being read is not an actual letter
    // it will keep increasing the length so it ignores spaces
     // and puncutation
    }
    while(!isalnum(text[length]) && b<length){
       length--;

     // ignores spaces and puncutation but decreases length
    }
   if(text[b++] == text[length--]){
     check = 0;
    // this part actually checks if it's a palindrom
   }
   else{
     check = 1;
     // 1 means it is not a palindrome
   }
}

if(check == 0 ){
   printf("Found a palindrome!\n");

}





// int b;
// int check=1;

// for(b=0;b<length-1;b++){

 /// if(text[b] == text[length-b-1]){
  //  check = 0;
  //}

 // else {
  //   check = 1;
 // }

// }

// if(check == 0){
// printf("Found a palindrome!\n");







}



