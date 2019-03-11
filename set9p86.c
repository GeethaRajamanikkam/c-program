#include <stdio.h>

int main(void) {
  int a[20],i,n,m,j,c;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    c=a[0];
    for(j=i+1;j<n;j++)
    {
    m=c^(a[j]);
    }
  }
  printf("%d",m);
  return 0;
}
