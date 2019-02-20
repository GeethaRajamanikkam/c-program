#include <stdio.h>

int main(void) {
 int a[100],i,large;
 for(i=1;i<=10;i++)
 {
 scanf("%d",&a[i]);
 }
 large=a[0];
 for(i=1;i<=10;i++)
 {
   if(a[i]>large)
   {
     large=a[i];
   }
 }
 printf("%d",large);
return 0;
}
