#include <stdio.h>
#include <stdlib.h>

//Find the largest prime factor of 600851475143

int main(){

  long test = 600851475143;
  int divisor = 2;
  
  while(test > divisor){
    
    if (test % divisor == 0){
      test = test/divisor;
    }
    else{
      divisor += 1;
    }
  }
  
  printf("%ld\n", test); // Correct answer is 6857
  
}
