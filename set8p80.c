#include <stdio.h>
#include<stdlib.h>
int main(void) {
  int a[100],i,n,min,c[50],k=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      c[k]=a[i]-a[j];
      k++;
    }
  }
  min=c[0];
  for(k=0;k<n;k++)
  {
    if(min<c[k])
    {
      min=c[k];
    }
  }
  printf("%d",abs(min));
  return 0;
}
