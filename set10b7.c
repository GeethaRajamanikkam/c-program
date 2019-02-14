#include <stdio.h>

int main(void) {
  int a,r,s=0;
  scanf("%d",&n);
 while(n>0)
 {
   r=r%10;
   s=s*10+r;
   n=n/10;
 }
 printf("%d",s);
  return 0;
}
