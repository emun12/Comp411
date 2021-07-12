
#include <stdio.h>

 int main() {


int a,b;
int i,j;

int count = 1;


while(count !=0){

printf("Please enter width and height:\n");
scanf("%d",&a);


   if(a==0){
     printf("End\n");
     count = 0;
   }
 else{
  scanf("%d",&b);


   for(i=0; i<b;i++){

     for(j=0;j<a;j++){
       if(i==0 ){

          if(j==0){
              if(a == 1){
                  printf("+\n");
              }
//         else if (b==1){
  //         printf("|\n");
    //    }
       
             else{
              printf("+");
             }
          }
         else if (j==a-1){
          printf("+\n");
          }
          else{
  //          if(b==1){
    //          printf("\n|");
      //       }

        //    else{
             printf("-");

          //   }
           }
       }

       else if(i==b-1){

          if(j==0){
             if(a==1){
               printf("+\n");
             }
          else{
             printf("+");
          }
          }
          else if (j==a-1){
            printf("+\n");
          }
          else{
            printf("-");
          }
       }

       else{
          if(j==0){

              if(a == 1){
                 printf("|\n");
              }
              else{
              printf("|");
             }
         }
          else if (j==a-1){
            printf("|\n");
          }
          else{
            printf("~");
         }

       }

     } 
   }

   }

}






}
