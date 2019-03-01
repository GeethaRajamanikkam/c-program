#include <stdio.h>
#include<string.h>
int main(void) {
  char a[100];
  int i,m=0,n=0;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]=='(')
    {
   m++;
    }
    if(a[i]==')')
    {
      n++;
    }
  }
  if(m==n)
  printf("yes");
  else
  printf("No");
  return 0;
}
