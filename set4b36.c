#include <stdio.h>

int main(void) {
 char a[100];
 int i,c=0,count=0;
 scanf("%s",a);
 for(i=0;a[i]!='\0';i++)
 {
   if((a[i]>='a'&&a[i]<='z')||(a[i]>='0'&&a[i]<='9')||
   (a[i]>='A'&&a[i]<='Z'))
   {
     c=0;
   }
   else
   {
     count++;
   }
 }
 printf("%d",count);
return 0;
}
