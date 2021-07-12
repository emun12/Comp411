
#include <stdio.h>

int N;                    // length of pattern
char pattern[11];         // at most 10 chars plus NULL

void makepatterns(int currentlevel) {
  if(currentlevel == N)
    printf("%s\n", pattern);    // print a pattern
  else {
    pattern[currentlevel] = '0';       // set one character to something
    makepatterns(currentlevel+1);      // recursive call
if(pattern[currentlevel-1] != '1'){
  pattern[currentlevel] = '1';  

 makepatterns(currentlevel+1);
}  
//  pattern[currentlevel] = '1';       // set it to something else
//if(pattern[currentlevel+1] == '1'){
//makepatterns(currentlevel+2);
//}
 // makepatterns(currentlevel+1);      // recursive call
  }
}

int main() {
  scanf("%d", &N);        // read N, pattern length
  pattern[N] = '\0';      // terminate string at position N
  makepatterns(0);        // generate all patterns (recursively)
}

