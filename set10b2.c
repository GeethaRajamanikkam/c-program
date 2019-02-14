#include <stdio.h>

int main(void) {
  int a[100],n,i,r,s=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 i=0;
 while(a[i]>0)
 {
   r=a[i]%10;
   s=s+r;
   a[i]=a[i]/10;
   i++;
 }
 printf("%d",s);
  return 0;
}
