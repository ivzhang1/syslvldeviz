#include <stdio.h>
#include <stdlib.h>

//Find the difference between the sum of the squares of the first one hundred natural numbers
//and the square of the sum.

int main(){
  int sum = 0;
  int sum_sq = 0;
  
  for (int i = 1; i < 101; i++){
    sum += i;
    sum_sq += i * i;
  }

  printf("%d\n", sum*sum - sum_sq); //Solution is 25164150

  
}

