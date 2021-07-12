/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main()
{
  float r, a, b;
  int count = 1;

while(count > 0)
{

 printf("Enter radius (in cm):\n");
  scanf("%f", &r);

if(r!=0){
  a =( PI * r * r ) / (2.54 * 2.54 ) ;
  b = ( 2 * PI * r)/ (2.54) ;

  printf("Circle's area is %3.2f (sq in).\n", a);
  printf("Its circumference is %3.2f (in).\n",b);
 }
  else {
   a = ( PI * r * r ) / (2.54 * 2.54) ;
   b = (2 * PI * r) / (2.54) ;

   printf("Circle's area is %3.2f (sq in).\n",a);
   printf("Its circumference is %3.2f (in).\n",b);
   count = 0;
  }
 }
}
