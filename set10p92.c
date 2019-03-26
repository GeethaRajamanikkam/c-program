#include <stdio.h>

int main(void) {
   int n,b,s=0,m=1,r;
   scanf("%d",&n);
   while(n>0)
   {
     r=n%10;
     s=s+r*m;
     n=n/10;
     m=m*2;
   }
   printf("%d",s);
    return 0;
}
