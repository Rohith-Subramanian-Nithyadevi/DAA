/*write a program for transposing a 3 x 3 matrix.*/
#include<stdio.h>
int main(){
  int a[3][3];
  int t[3][3];
  printf("Enter a 3 x 3 matrix to transpose:\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&a[i][j]);
      t[j][i]=a[i][j];
    }
  }
  printf("Transpose Matrix:\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d\t",t[i][j]);
    }
    printf("\n");
  }
  return 0;
}
