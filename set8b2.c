#include <stdio.h>
#include<string.h>
int main(void) {
int i,c=0;
char a[100];
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
  if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
  {
    c++;
  }}
  if(c!=0)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
