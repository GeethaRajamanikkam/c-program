#include <stdio.h>

int main()
{
 int a[20],n,i,j,k;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 k=a[0]|a[0];
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   {
    if((a[i]|a[j])>k)
    {
    k=a[i]|a[j];
   }
   }
 }
  printf("%d",k);
    return 0;
}
