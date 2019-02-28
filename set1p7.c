#include <stdio.h>

int main(void) {
  char a[100];
  int i;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    if(i%2==0 && (i+1)%2!=0)
    {
  printf("%c%c",a[i+1],a[i]);
    }
  }
  return 0;
}
