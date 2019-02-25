#include <stdio.h>

int main(void) {
  int n,i,s=1,r;
  scanf("%d",&n);
  for(i=1;i<=5;i++)
  {
    s=i*n;
    printf("%d\t",s);
  }
  
  return 0;
}
