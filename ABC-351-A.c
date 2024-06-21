#include<stdio.h>

int main(){
  int a[9],b[8];
  int i,j,sum1=0,sum2=0;
  for(i=0;i<=8;i++){
    scanf("%d",&a[i]);
    sum1= sum1 + a[i];
  }
  for(j=0;j<8;j++){
    scanf("%d",&b[j]);
    sum2= sum2 + b[j];
  }
  printf("%d",sum1-sum2+1);
  
}