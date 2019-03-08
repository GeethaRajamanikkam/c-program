#include <stdio.h>

int main(void) {
 int a[100],i,n,k,c=0;
 scanf("%d %d",&n,&k);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
   if(a[i]==k)
   {
     c++;
   }
 }
 if(c!=0)
 {
   printf("%d",c);
 }
 else
 {
   printf("%d",a[0]);
 }
  return 0;
}
