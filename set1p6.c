#include <stdio.h>
#include<string.h>
int main(void) {
  char a[100],b[100];
  int i,m,n,flag=0;
  scanf("%s %s",a,b);
  m=strlen(a)-1;
  n=strlen(b)-1;
  for(i=0;i<m;i++)
  {
    if(a[i]==a[i+1] && b[i]==b[i+1])
    {
      flag++;
    }
    if(a[i]!=a[i+1] && b[i]!=b[i+1])
    {
      flag++;
    }
  }
  if(flag==m)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  return 0;
}
