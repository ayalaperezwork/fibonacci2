/*Program to generate the fibonacci series
in main, will be asked for the limit of the
series */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int fibonacciSerie(int n){
  // Print the header n  F(n-2)  F(n-1)  F(n)
  printf("\nPrinting the fibonacci series from 0 to %d : \n", n);
  printf("n \t\tF(n-2) \t\t\t\tF(n-1) \t\t\t\tFn \n");
  printf("1 \t\t0 \t\t\t\t1 \t\t\t\t1 \n");
  printf("2 \t\t1 \t\t\t\t1 \t\t\t\t2 \n");
  // Initialize vars last2, last1, count
  unsigned long int last2 = 1;
  unsigned long int last1 = 2;
  unsigned long int fibn  = 0;
  unsigned int count = 3;
  
  // Repeat to build the series
  do{
    // Store new value from add last2 + last1
    fibn = last2 + last1;
    // Print calculated values count, last2, last1, actual
    printf("%u \t\t%lu \t\t\t\t%lu \t\t\t\t%lu \n", count, last2, last1, fibn);
    // Move values
    last2 = last1;
    last1 = fibn;
    // Increae count to point the next number
    count++;
  }while(count < n);// Repeat while count <= n
  
  return 0; 
}

int main (void){
  int limit = 3;
  int valid = 0;
  // Get the limit value
  printf("Please,type the limit value for the fibonacci serie, \n");
  printf("Just integers and big than 3. No char, no string, no float,\n");
  printf("If you type a float, just the integer part will be considered: ");
  // Validating that limit isn't char o string
  valid   = scanf("%d", &limit);
  // If is a valid value, get the fibonacci function
  if(limit >= 3 & valid){
    printf("Inside fibonacci\n");
    fibonacciSerie(limit);
    return 0;
  }
  // Is an invalid value, print message and end
  printf("Invalid value. \n\n");
  return 0;
}
