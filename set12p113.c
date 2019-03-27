#include <stdio.h>

int main(void) {
  char a[100];
  int flag;
  scanf("%s",a);

  if(a[0]<'3' && a[1]<='9' && a[2]=='/' && a[3]<'1' && 
  a[4]<='9' && a[5]=='/' && a[6]<='9'&&a[7]<='9' && 
  a[8]<='9' && a[9]<='9')
  {
    flag=1;
  }
  else
  {
    flag=0;
  }
  if(a[0]=='3' && a[1]<'2' && a[3]<'2' && a[4]<'2')
  {
    flag=1;
  }
  if(flag==1)
  printf("Yes");
  else 
  printf("No");
  return 0;
  }
