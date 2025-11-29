/*Write a program to calculate Fibonacci of a number*/
#include<stdio.h>

void fibonacci(int n){
  int a=0;
  int b=1;
  int c=0;
  if(n<1){
    printf("Invalid Input.\n");
  }
  else{
    for(int i=1;i<=n;i++){
      if(i>2){
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
      }
      else if(i==1){
        printf("%d\t",a);
      }
      else if(i==2){
        printf("%d\t",b);
      }
    }
  }
}
int main(){
  int n;
  printf("Enter the number to print its Fibonacci.\n");
  scanf("%d",&n );
  fibonacci(n);
  printf("\n");
  return 0;
}
