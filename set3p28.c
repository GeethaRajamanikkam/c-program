#include <stdio.h>
#include<string.h>
int main(void) {
 char a[100];
 int i,n;
 scanf("%[^\t\n]s",a);
 n=strlen(a);
 for(i=0;i<n;i++)
 {
   if(a[i]!=' ')
   {
   printf("%c",a[i]); 
   }
 }
  return 0;
}
