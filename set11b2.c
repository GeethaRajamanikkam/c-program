#include <stdio.h>

int main(void) {
  int a,b;
  scanf("%d",&a);
  if(a%2==0)
  {
    b=a/2;
    printf("%d",b);
  }
  else
  {
    printf("%d",a);
  }
  return 0;
}
