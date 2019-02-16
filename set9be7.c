#include <stdio.h>

int main(void) {
  int a,b,i,m;
  scanf("%d %d",&a,&b);
  for(i=1;i<=a&&i<=b;i++)
  {
    if(a%i==0 && b%i==0)
    {
      m=i;
    }
  }
  printf("%d",m);
  return 0;
}
