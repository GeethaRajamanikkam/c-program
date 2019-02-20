#include <stdio.h>

int main(void) {
 int i,n,f1=1,f2=1,next;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 printf("%d\t",f1);
 next=f1+f2;
 f1=f2;
 f2=next;
 }
return 0;
}
