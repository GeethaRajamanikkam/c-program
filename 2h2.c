#include <stdio.h>

int main(void) {
  int a[100],b,i,j,n,k;
  scanf("%d",&n);
  scanf("%d",&k);
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
        b=a[i];
        a[i]=a[j];
        a[j]=b;
      }
    }
  }
  i=n-k;
  printf("%d",a[i]);
  return 0;
}
