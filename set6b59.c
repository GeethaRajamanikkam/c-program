#include <stdio.h>

int main(void) {
  int a,s=0,r;
  scanf("%d",&a);
  while(a>0)
  {
 r=a%10;
 s++;
 a=a/10;
  }
  printf("%d",s);
  return 0;
}
