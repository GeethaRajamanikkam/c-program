#include <stdio.h>

int main(void) {
  int a[100],n,i,j,max;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
 max=a[1]-a[0];
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[j]-a[i]>max)
      {
        max=a[j]-a[i];
      }
    }
  }
  printf("%d",max);
  return 0;
}
