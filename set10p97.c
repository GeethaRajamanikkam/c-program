#include <stdio.h>
#include<string.h>
int main(void) {
int a,b,i,s=0;
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
  if(i%2!=0)
  {
    s=s+i;
  }
}
printf("%d",s);
  return 0;
}
