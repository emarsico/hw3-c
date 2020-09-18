#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <math.h>

int digit_sum(n){
  if (n < 10){
    return n;
  }else{
    int last = n - ((n/10)) * 10;
    return (digit_sum((n/10))) + last;
  }

}

int main(void) {
  char* digit = readline("Enter an int: ");
  int sum = digit_sum(atof(digit));
  
  printf("sum of digits of %s is %d.\n", digit, sum);

}