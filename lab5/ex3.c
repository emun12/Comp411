#include <stdio.h>
#include <string.h>

char animals[20][15];
char lyrics[20][60];
int  number;

void nurseryrhyme(int current) {

  printf("%*s",current,"");             // print "current" number of spaces
  if(current == 0){
    printf("There was an old lady who swallowed a %s;\n", animals[current]);

  }
  if(current > 0){

    printf("She swallowed the %s to catch the %s;\n",animals[current-1],animals[current]);
  }

 
  if(current < number-1){  
    nurseryrhyme(current+1);

   }
 printf("%*s",current,"");

    printf("I don't know why she swallowed a %s - %s",animals[current],lyrics[current]);

//   printf("%*s",current," ");
}


int main() {
  int i=0;
int length;
  while (1) {
    fgets(animals[i],15,stdin);                                            // read the next animal name

    if (strcmp(animals[i], "END\n") == 0)       // if it is "END\n", we are done reading
      break;


   length = strlen(animals[i])-1;

   int a = 0;

   while(a<=length){
  //   animals[i][a] = animals[i][a];

     if(a==length){
      animals[i][a] = '\0';
      
     }
    a++;
    }


    fgets(lyrics[i],60,stdin);

    i++;
  }

  number = i;

  nurseryrhyme(0);
}
