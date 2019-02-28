#include <stdio.h>
#include<string.h>
int main(void) {
  char a[100],b[100];
  int i,c=0;
  scanf("%s %s",a,b);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]!=b[i])
    {
      c++;
    }
  }
  if(c!=0)
  {
    printf("yes");
  }
  else 
  {
    printf("no");
  }
    return 0;
}
