#include <stdio.h>
int main(void) {
  char a[100];
  int i;
  scanf("%s",a);
for(i=0;a[i]!='\0';i++)
  {
    printf("%c\t",a[i]);
  }
  return 0;
}
