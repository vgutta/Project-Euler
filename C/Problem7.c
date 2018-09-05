#include <stdio.h>

int main(void) {
  int i = 3, c, largestPrime,count, n=10001;
  
  for(count = 2; count <= n; i++){
    for(c = 2; c < i; c++){
      if(i%c == 0)
          break;
    }

    if(c == i){
      count++;
    }

  }
  printf("%d", c);
  return 0;
}
