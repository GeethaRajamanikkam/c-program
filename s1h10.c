#include <stdio.h>
#include<string.h>
int main(void) {
  int a[100],b[100],i,j,m,n,c=0,k;
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<m;i++)
  {
    scanf("%d",&b[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
  {
    if(a[i]==b[j])
    {
      c++;
    }
  }
  }  
    if(c==m)
    {
      printf("Yes");
    }
    else
    {
      printf("No");
    }
  
  return 0;
}
