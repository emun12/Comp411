#include <stdio.h>
int main(){
int AA[100];  		// linearized version of A[10][10]
int BB[100];  		// linearized version of B[10][10]
int CC[100];  		// linearized version of C[10][10]
int m;       		// actual size of the above matrices is mxm, where m is at most 10


int size;
scanf("%d",&size);

int i,j;

for(i=0;i<size;i++){
    for(j=0;j<size;j++){
       scanf("%d",&AA[size*j+i]);
    }
}


int a,b;

for(a=0;a<size;a++){
    for(b=0;b<size;b++){
       scanf("%d",&BB[size*b+a]);
    }
}


int first = 0;
int second = 0;
int third = 0;


while(first < size){
	while(second<size){

              CC[second*size+first] = 0;
		third = 0;
// have to set it to 0 otherwise it won't go to the right column or row
		while(third < size){
 CC[second*size+first] = CC[size*second+first]+ (AA[third*size+first]*BB[second*size+third]);
                  // does dot product of row for A and column for B  
                  third++;
		}
           second++;
	}
	second = 0;
     first++;
}

int n,p;

for(n=0; n<size;n++){
	for(p=0; p<size;p++){
          printf("%d ",CC[size*p+n]);
        }
     printf("\n");

}

return 0;
}
