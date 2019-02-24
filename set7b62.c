#include <stdio.h>
#include <string.h>
int main(void) {
  char a[100];
  int i,n,c=0;
  scanf("%s",a);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
    if(a[i]=='0' || a[i]=='1')
    {
    c=1;
    }
    else
    {
      c=0;
      break;
    }
  } 
  if(c==1)
  {
    printf("yes");
  } 
  else
  {
    printf("no");
  }
  return 0;
}
