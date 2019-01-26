#include <stdio.h>

int main(void) {
 int n,a[100],c=0,k,i;
 scanf("%d",&n);
 scanf("%d",&k);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=k-1;i>=0;i--)
 {
  c=c+a[i];
 }
 printf("%d",c);
  return 0;
}
