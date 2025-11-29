/*Write a program to calculate Fibonacci of a number*/
#include<stdio.h>
int a=1;
int b=1;
int count=1;
int fibonacci(int n){
  while(count<n){
    int c=a+b;
    a=b;
    b=c;
    count++;
    printf("%d\t",c);
  }
}
int main(){
  int n;
  printf("Enter the number to print its Fibonacci.\n");
  scanf("%d",&n );
printf("%d\t %d\t",1,1);
  fibonacci(n);
  printf("\n");
  return 0;
}
