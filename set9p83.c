#include <stdio.h>
#include<math.h>
int main(void) {
 int b[50],n,i,j,m,c=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&b[i]);
   c++;
 }
 if(c>1)
 {
 for(i=0;i<n;i++)
 {
   for(j=i+1;j<n;j++)
   {
     m=(b[i])|(b[j]);
   } 
 }
  printf("%d",m);
 }
 if(c==1)
 {
 printf("%d",b[0]);
 }
  return 0;
}
