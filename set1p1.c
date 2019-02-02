#include <stdio.h>
#include<string.h>
int main(void) {
   char a[100],b;
   int i,j;
   scanf("%[^\t\n]s",a);
   i=0;
   j=strlen(a)-1;
   while(i<j)
   {
     b=a[i];
     a[i]=a[j];
     a[j]=b;
     i++;
     j--;
   }
   printf("%s",a);
    return 0;
}
