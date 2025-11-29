/*write a program to find the factorial of a given integer using recursion.*/
#include<stdio.h>
int factorial(int n){
  if(n==1){
    return 1;
  }
  else{
   return n*factorial(n-1);
  }
}
int main(){
  int n;
  printf("Enter the number to calculate its factorial\n");
  scanf("%d",&n);
  int fact=factorial(n);
  printf("The factorial of given number is: %d\n",fact);
  return 0;
}
