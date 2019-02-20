#include <stdio.h>
#include<string.h>
int main(void) {
 char a[100],b[100];
 int i,j;
 scanf("%s %s",a,b);
 i=strlen(a);
   for(j=0;b[j]!='\0';j++,i++)
   {
     a[i]=b[j];
   }
a[i]='\0';
 printf("%s",a);
return 0;
}
