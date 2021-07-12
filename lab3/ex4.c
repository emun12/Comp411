/* Example: matrices represented by 2-dimensional arrays */

#include <stdio.h>

int main()
{
  int A[3][3];    // matrix A     
  int B[3][3];    // matrix B
  int C[3][3];    // matrix to store their sum

  // add your code below
int a1,a2,a3;
int i,j;
int a,b;

printf("Please enter 9 values for matrix A:\n");
// scanf("%i%i%i",&a1,&a2,&a3);
printf("Please enter 9 values for matrix B:\n");
printf("C = B + A =\n");


for(i=0; i<3;i++){
   for(j=0; j<3;j++){
       scanf("%d",&A[j][i]);
   }
}

for(a=0;a<3;a++){
   for(b=0;b<3;b++){
    scanf("%d", &B[b][a]);
   }

}



int k,l;
for(k=0; k<3;k++){
    for(l=0; l<3;l++){
 
      C[l][k] = A[l][k] + B[l][k];
     //  printf("   ");
//       printf("%*i ",9,C[l][k]);
       printf("%10d",C[l][k]);
    }
     printf("\n");
}








}
