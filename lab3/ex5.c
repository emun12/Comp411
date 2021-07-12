#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {

  char buf[MAX_BUF];
  int length;

int counter = 0;
char c;

 do {

       scanf("%s",buf);
       length = strlen(buf);
//       c = buf[counter];
       if(length == 0){
           break;
       }
       // if(buf[length-1] == '\0'){
         //      break;
       // }

       if(c == 'E'||'e'){
           // buf[counter] = '3';
            printf("3");
        }
     else  if(c == 'I'||'i'){
           //  buf[counter] == '1';
            printf("1");
        }
     else  if(buf[counter] == 'O'||'o'){
            // buf[counter] == '0';
           printf("0");
        }
     else  if(buf[counter] == 'S'||'s'){
            // buf[counter] == '5';
            printf("5");
        }

       else  if(buf[counter] == '\0'){
             break;
        }
        printf("%s",buf);
       counter++;
      length--;
      // length--;
//       printf("%s",buf);
        // read a line
        // calculate its length
        // modify the line by switching characters
        // print the modified line
  } while (counter<=length);
//length > 1






}
