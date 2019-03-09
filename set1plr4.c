#include <stdio.h>
#include<string.h>
int main(void) {
  char a[50];
  char b[10]={'.'};
  scanf("%s",a);
  printf("%s",strcat(a,b));
  return 0;
}
