#include <stdio.h>
#include<string.h>
int main(void) {
 int a,n,s,m;
 scanf("%d",&a);
 s=a%10;
 while(a)
 {
   m=a%10;
   a=a/10;
 }
 m=m+s;
 printf("%d",m);
  return 0;
}
