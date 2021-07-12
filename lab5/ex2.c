#include <stdio.h>

int A[10][10];
int B[10][10];
int C[10][10];

int main() {

int size;
scanf("%d",&size);

int i,j;

for(i=0;i<size;i++){
    for(j=0;j<size;j++){
       scanf("%d",&A[i][j]);
    }
}


int a,b;

for(a=0;a<size;a++){
    for(b=0;b<size;b++){
       scanf("%d",&B[a][b]);
    }
}


int first = 0;
int second = 0;
int third = 0;


while(first < size){
	while(second<size){

              C[first][second] = 0;
		third = 0;
// have to set it to 0 otherwise it won't go to the right column or row
		while(third < size){
                    C[first][second] = C[first][second]+ ( A[first][third]*B[third][second]);
                  // does dot product of row for A and column for B  
                  third++;
		}
           second++;
	}
	second = 0;
     first++;
}

int n,m;

for(n=0; n<size;n++){
	for(m=0; m<size;m++){
          printf("%6d",C[n][m]);
        }
     printf("\n");

}


}
