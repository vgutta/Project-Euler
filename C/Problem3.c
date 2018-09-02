#include <stdio.h>
#include <math.h>

int main() {
  long n = 600851475143;
  long largestPrime = 0;
  
  if(n % 2 == 0){
    largestPrime = 2;
  }

  for (int i = 3; i <= sqrt(n); i += 2) {
    while (n % i == 0) {
      largestPrime = i;
      n = n / i;
    }
  }

  if(n > 2){
    largestPrime = n;
  }

  printf("%d", largestPrime);
  return 0;
}

