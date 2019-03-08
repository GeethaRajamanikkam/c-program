#include <stdio.h>
#include<string.h>
int main(void) {
  int i,n,a[100],s=0,k,flag;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
 s=s+a[i];
 if(s==k)
 {
   flag=1;
 }
  }
  if(flag==1)
  printf("yes");
  else
  printf("no");
  return 0;
}
