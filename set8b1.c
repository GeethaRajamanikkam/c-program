#include <stdio.h>
#include<string.h>
int main(void) {
int i,j=0,c=0,n;
char a[100],b[100];
scanf("%s",a);
n=strlen(a);
for(i=n-1;i>=0;i--)
{
  b[j]=a[i];
  j++;
} 
for(i=0;i<n-1;i++)
{
  if(a[i]==b[i])
  {
  c++;
 } }
if(c==n-1)
{
  printf("Yes");
}
else{
  printf("No");
}
  return 0;
}
