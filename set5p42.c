#include <stdio.h>

int main(void) {
  int a[100],i,n,flag,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]<a[j])
      {
        flag=1;
      }
      else
      {
        flag=0;
        break;
      }
    }
  }
  if(flag==1)
  printf("yes");
  else
  printf("No");
  return 0;
}
