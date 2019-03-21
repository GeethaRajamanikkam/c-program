#include <stdio.h>

int main(void) {
  int n,i,j,k,a[100],temp;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<k;i++)
  {
   temp=a[n-1];
   for(j=n-1;j>=0;j--)
   {
     a[j]=a[j-1];
   }
   a[0]=temp;
  }
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }

  return 0;
}
