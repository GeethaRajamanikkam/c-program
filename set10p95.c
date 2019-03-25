#include <stdio.h>
#include<string.h>
int main(void) {
  char a[100];
  int p,k,m;
  scanf("%s",a);
  scanf("%d %d",&p,&k);
  m=p+k;
  printf("%c",a[m-1]);
  return 0;
}
