#include <stdio.h>

int main(void) {
  int a[100],b[100],k,i,n,m; 
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
  if(a[i]%2!=0)
  {
    b[i]=a[i];
  }
  }
i=k;
printf("%d",b[i]);
return 0;
}
