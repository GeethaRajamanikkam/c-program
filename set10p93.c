#include <stdio.h>

int main(void) {
  int a[100],i,j,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(i%2==0 && i<n-1)
    {
      printf("%d %d\t",a[i+1],a[i]);
    }
    if(i%2==0 && i==n-1)
    {
      printf("%d",a[i]);
    }
  }
  return 0;
}
