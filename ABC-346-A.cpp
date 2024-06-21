#include <stdio.h>
int main()
{
    int t,i,b,ar[100];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
      scanf("%d",&ar[i]);}
      for(i=1;i<t;i++){
    b= ar[i]*ar[i+1];
    printf("%d ",b);}
    
    
    
    
}