#include <stdio.h>
#include<string.h>
int main(void) {
 char a[100];
 int n,i,c;
 scanf("%[^.\t\n]s",a);
 n=strlen(a);
 for(i=0;a[i]!='\0';i++)
 {
 if(a[i]>='0'&& a[i]<='9')
 {
   c=1;
 }
 else
 {
   printf("No");
   c=0;
   break;
 }}
 if(c==1)
 {
   printf("Yes");
 }
  return 0;
}
