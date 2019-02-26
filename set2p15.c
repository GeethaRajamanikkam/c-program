#include <stdio.h>
#include<string.h>
int main(void) {
  char a[100],b;
  int i;
  scanf("%[^\t\n]s",a);
  for(i=0;a[i]!='\0';i++)
  {
if(a[i]==a[i+1])
 {
   b=a[i];
  }
  }
  printf("%c",b);
  return 0;
}
