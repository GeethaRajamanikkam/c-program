#include <stdio.h>
int main(void) {
   int n,r,s=0;
   scanf("%d",&n);
   while(n)
   {
     r=n%10;
     s=s*10+r;
     n=n/10;
   }
   printf("%d",s);
    return 0;
}
