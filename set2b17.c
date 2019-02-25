#include<stdio.h>
int main(void)
{
int n,t,s=0,x,a;
scanf("%d",&n);
t=n;
while(n!=0)
{
  a=n%10;
  x=a*a*a;
  s=s+x;
  n=n/10;
}
if(s==t)
{
   printf("yes");
}
else
{
  printf("no");
}
return 0;
}
