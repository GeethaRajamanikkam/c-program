#include <stdio.h>
int main(void) {
 int a[100],n,i,s=0,avg;
 scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  s=s+a[i];
}
avg=s/n;
printf("%d",avg);
return 0;
}
