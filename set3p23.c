#include <stdio.h>

int main(void) {
  int a[100],k,i,j,n,max,c=0;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=n;i<n+k;i++)
  {
  scanf("%d",&a[i]);
  c++;
  max=a[0];
  for(j=1;j<n+c;j++)
  {
    if(max<a[j])
    {
      max=a[j];
    }
  } 
  printf("%d\t",max);
  }
  return 0;
}
