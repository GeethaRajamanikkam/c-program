#include <stdio.h>
int main(void) {
 int a,r,s=0;
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
