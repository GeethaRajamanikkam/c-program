#include <stdio.h>
#include<string.h>
int main(void) {
  int a[50],b[50],i,n,j,s=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    scanf("%d",&b[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
  {
    if(a[i]==b[j])
    {
       printf("%d\t",a[i]);
    }
  }
  }
  
  return 0;
}
