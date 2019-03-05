#include <stdio.h>

int main(void) {
  int n,k,a[100],i,s=0,s1=0,m,f,m1;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    s=s+a[i];
  }
  m=s/2;
  printf("%d\n",m);
  for(i=0;i<n;i++)
  {
    if(i==k)
    continue;
    else
    s1=s1+a[i];
  }
  m1=s1/2;
  f=m-m1;
  printf("%d",f);
  return 0;
}
