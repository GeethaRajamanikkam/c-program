#include <stdio.h>
#include<string.h>
int main(void) {
  char a[100],b[10],c;
  scanf("%s",a);
  scanf("%s",b);
  printf("%s",strcat(a,b));
  return 0;
}
