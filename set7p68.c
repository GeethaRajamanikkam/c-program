#include <stdio.h>
#include<string.h>
int main(void) {
  int a[50],i,n,j,c=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;i<n;i++)
    {
      if(a[i]==a[j])
      {
        c++;
      }
      else
      {
        break;
      }
    }
  }
  printf("%d",c);
  return 0;
}
