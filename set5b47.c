#include <stdio.h>
int main(void) {
 int a[100],n,j,i,t;
 scanf("%d",&n);
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
   t=a[i];
   a[i]=a[j];
   a[j]=t;
  }
}
}
printf("%d\t",a[0]);
n=i;
printf("%d",a[i-1]);
return 0;
}
