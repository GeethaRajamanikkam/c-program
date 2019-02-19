#include <stdio.h>
#include<string.h>
int main(void) {
 int a[100],i,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
   printf("%d\t %d\n",a[i],i);
 }
  return 0;
}
