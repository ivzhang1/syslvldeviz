#include <stdio.h>
#include <stdlib.h>

//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

int isDivisbleAll(int num){ //Returns 0 if TRUE, 1 if FALSE
  for(int i = 2; i < 21; i++){
    if(num%i != 0){
      return 1;
    }
  }
  return 0;
}



int main(){
  int n = 21;
  while(isDivisbleAll(n) != 0){
    n++;
  }
  //Smart way would be to multiply: 2*3*2*5*7*3*11*13*4*17*19
  printf("%d\n", n); //Correct Answer is 232792560
}

