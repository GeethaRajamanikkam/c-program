#include <stdio.h>

int main(void) {
  int n,k,i,a=1;
  scanf("%d %d",&n,&k);
  for(i=1;i<=k;i++)
  {
 a=n*a;
  }
  printf("%d",a);
  return 0;
}
