#include <stdio.h>

int main(void) {
int a[100],i,n,even=0,odd=0,temp,temp1;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  if(a[i]%2==0)
  {
  even++;
  temp=a[i];
  }
  if(a[i]%2!=0)
  {
   odd++;
   temp1=a[i];
  }
}
if(even==1)
{
  printf("%d",temp);
}
if(odd==1)
{
  printf("%d",temp1);
}
  return 0;
}
