#include<stdio.h>

int main()
{
int n,k,i,a[100],temp=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
 {
  temp++;
 }
}
if(temp==0)
 printf("no");
else
 printf("yes");

}
