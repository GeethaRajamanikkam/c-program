#include <stdio.h>
int main(void) {
	int a,b,c,i,flag;
	scanf("%d %d",&a,&b);
 c=a*b;
 for(i=1;i<=c;i++)
 {
   if(i*i==c)
   {
     flag=1;
     break;
   }
   else
   {
     flag=0;
   }
 }
 if(flag==1)
 {
   printf("yes");
 }
 else
 {
   printf("no");
 }
	return 0;
}
