#include <stdio.h>
#include<string.h>
int main(void) {
 char a[100],b[100];
 int i,k,m,c=0,flag;
 scanf("%s %s %d",a,b,&k);
 m=strlen(a);
 for(i=0;i<m;i++)
 {
   if(a[i]!=b[i])
   {
     c++;
   }
   if(a[i]!=b[i] && c==k)
   {
     flag=1;
   }
   else
   flag=0;
 }
 if(flag==1)
 printf("yes");
 else 
 printf("No");
  return 0;
}
