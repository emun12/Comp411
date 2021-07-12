#include <stdio.h>
#include <string.h>

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

int b;
int check=1;
for(b=0;b<length-1;b++){
  if(text[b] == text[length-b-1]){
    check = 0;
  }
  else {
     check = 1;
  }
}

if(check == 0){
printf("Found a palindrome!\n");


}




//int count;
//while(length > 1) {

  //if(text[count++] == text[count--]){
   // printf("Found a palindrome!");
  // }

//}






}
