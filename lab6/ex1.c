#include <stdio.h>

int main() {
int a;

 int i = 1;

 while(i!=0){
  printf("Number ?\n");
  scanf("%d",&a);

  if(a == 0){
     printf("Done\n");
     i = 0;
    // breaks out of the loop
     break;
   }

     int total = 0;

  int counter = 0;
  while(counter < a){
     total += counter;
     if(a == 1){
        printf("%d is a triangular number\n",a);
        break;
      // 1 is a triangular number so it just checks it for every case just in case the total value skips over it
     }

     if(total == a){
        printf("%d is a triangular number\n",a);
        break;
    // a triangular number is equal to the sum of adding numbers in order from 1 to a number
   // for instance, 3 is a triangular number because 1 + 2 = 3
   // the while loop will allow the number k, to keep increasing by 1 and then the total value will increase along with it
  // if the total value is equal to the input number, a, then that means it is a triangular number
     }

     counter++;
}
    if(counter == a){
        printf("%d is not a triangular number\n", a);
   // the total value never reached the input value so there is no consequent addition thata makes the input a
    }

 }


}
