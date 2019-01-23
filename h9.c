#include <stdio.h>

int main(void) {
  int n,a[100],i,j,c,k;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      c=a[i]+a[j];
      //printf("%d\t",c);
      if(c==1||c==-1||c==0)
      {
       printf("%d\t%d\n",a[i],a[j]);
      }
    }
  }
  return 0;
}
