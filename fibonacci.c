/*Program to generate the fibonacci series
in main, will be asked for the limit of the
series */

#include<stdio.h>
#include<stdlib.h>

int fibonacciSerie(int n){
  // Print the header n  F(n-2)  F(n-1)  F(n)

  // Initialize vars last2, last1, count

  // Repeat to build the series

  // Store new value from add last2 + last1

  // Print calculated values count, last2, last1, actual

  // Move values

  // Increase count to point the next number

  // Repeat while count <= n
  return 0; 
}

int main (void){
  int limit = 3;
  // Get the limit value
  printf("Please,type the limit value for the fibonacci serie: ");
  scanf("%d", &limit);
  // Is a valid value, get the fibonacci function
  if(limit >= 3){
    printf("Inside fibonacci\n");
    fibonacciSerie(limit);
    return 0;
  }
  // Is an invalid value, print message and end
  printf("Invalid value, just equal or less than integer 3. \n\n");
  return 0;
}
