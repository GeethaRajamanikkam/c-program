#include <stdio.h>
#include<string.h>
int main(void) {
 char a[100];
 int i,c=0,n,m;
 scanf("%[^\t\n]s",a);
 n=strlen(a);
 for(i=0;a[i]!='\0';i++)
 {
   if(a[i]==' ')
   {
     c++;
   }
 }
m=n-c;
 printf("%d",m);
  return 0;
}
