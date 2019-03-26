#include <stdio.h>

int main(void) {
  int a[100],n,i;
  scanf("%d",&n);
  i=0;
  while(n>0)
  {
    a[i]=n%2;
    i++;
    n=n/2;
  }
  for(i=i-1;i>=0;i--)
  {
    printf("%d",a[i]);
  }
  return 0;
}
