#include <stdio.h>

int main(void) {
  int a[100],k,i,n;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
i=k;
printf("%d",a[i-1]);
  return 0;
}
