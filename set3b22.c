#include <stdio.h>

int main(void) {
 int a[100],i,j,n,t;
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
   for(j=i+1;j<n;j++)
   {
   if(a[i]>a[j])
   {
     t=a[i];
     a[i]=a[j];
     a[j]=t;
   }
 }
 }
 i=n-1;
 printf("%d",a[i]);
  return 0;
}
