#include <stdio.h>
#include<math.h>
int main(void) {
 int a[100],n,i,j,m,c=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
   c++;
 }
 if(c>1)
 {
 for(i=0;i<n;i++)
 {
   for(j=i+1;j<n;j++)
   {
     m=(a[i])&(a[j]);
   } 
 }
  printf("%d",m);
 }
 if(c==1)
 {
 printf("%d",a[0]);
 }
  return 0;
}
