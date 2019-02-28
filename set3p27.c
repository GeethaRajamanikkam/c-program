#include <stdio.h>
#include<string.h>
int main(void) {
 char a[100];
 int i,n;
 scanf("%s",a);
 n=strlen(a);
 for(i=0;i<n;i++)
 {
   if(a[i]>='a' && a[i]<='z')
   {
     a[i]=a[i]-32;
   }
   else if(a[i]>='A' && a[i]<='Z')
   {
     a[i]=a[i]+32;
   }
 }
 printf("%s",a);
  return 0;
}
