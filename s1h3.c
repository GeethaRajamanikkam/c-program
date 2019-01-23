#include <stdio.h>
#include<string.h>
int main(void) {
  int a[100],i,n,count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
 for(i=0;i<n;i++)
 {
   if((i==a[i]))
   {
    count++;
    printf("%d\t",a[i]);
   }
 }
   if(count==0)
   {
  printf("-1");
   }
  return 0;
}
