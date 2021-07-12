/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main()
{
  double a,sum, product, min, max;
  int count;

     sum = 1;
     product = 1;
     min = 1;
     max  = 1;

  printf("Enter 10 floating-point numbers:\n");
   scanf("%lf",&a);

   sum = a;
   product = a;
   min = a;
   max = a;
  

   for(count = 0; count < 9; count++){ 

     scanf("%lf",&a);

     sum += a;
     product *= a;

    if(min < a){
      min = min;
     if(max < a) {

       max = a;
     } 
     else if (max > a) {
      max = max;
     } 
    }

    else if (min > a) {
      min = a;

       if(max < a) {

       max = a;
     }
     else if (max > a) {
      max = max;
     }


    } 


   }

    
   printf("Sum is %.5lf\nMin is %.5lf\nMax is %.5lf\nProduct is %.5lf\n",sum, min, max, product);

}

