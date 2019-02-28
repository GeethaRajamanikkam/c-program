#include <stdio.h>

int main(void) {
  int a,i,flag,j;
  scanf("%d",&a);
  for(i=2;i<=a;i++)
  {
    if(a%i==0)
    {
    flag=1;
    for(j=2;j<=i/2;j++)
   {
    if(i%j==0)
    {
      flag=0;
      break;
    }
   }
    if(flag==1)
    {
      printf("%d\t",i);
    }
  }
  }
  return 0;
}
