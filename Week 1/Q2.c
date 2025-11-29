/*write a program to find sum of squares of the first n natural numbers.*/
#include<stdio.h>
int main(){
  int n;
  printf("Enter the number to calculate sum of squares of the numbers:\n");
  scanf("%d",&n);
  int val=0;
  for(int i=1;i<=n;i++){
    val+=i*i;
  }
  printf("The sum of square of number till %d is: %d\n",n,val);
  return 0;
}
