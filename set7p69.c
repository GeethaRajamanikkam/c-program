#include <stdio.h>

int main(void) {
  int a[50],n,i,k;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-k;i++)
  {
    printf("%d\t",a[i]);
  }
  return 0;
}
