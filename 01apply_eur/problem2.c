#include <stdio.h>
#include <stdlib.h>

int fibR(int prev, int curr, int res){
  if(prev > 4000000){
    return res;
  }

  if(prev % 2 == 0){
    res += prev;
  }
  
  return fibR(curr, prev + curr, res); 

  
}

int main(){
  int ans = fibR(1, 1, 0);

  printf("%d\n", ans); // Correct answer is 4613732
}
