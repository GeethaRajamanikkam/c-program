#include <stdio.h>
#include<string.h>
int main(void) {
  int a,b,i,c=0,f,j;
  scanf("%d %d",&a,&b);
  for(i=a;i<=b;i++)
  {
    f=0;
    for(j=2;j<=i/2;j++)
    {
      if(i%j==0)
      {
        f=1;
        break;
      }
    }
      if(f==0)
      {
        c++;
      }
    }
  
  printf("%d",c);
    return 0;
}
