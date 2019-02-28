#include <stdio.h>
#include<string.h>
int main(void) {
 int n,a[100],i,k,flag;
 scanf("%d %d",&n,&k);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
   if(a[i]==k)
   {
     flag=1;
     break;
   }
 }
 if(flag==1)
 printf("Yes");
 else
 printf("No");
  return 0;
}
