#include <stdio.h>
#include <string.h>
int main(void) {
  char a[100];
  int i,n,k;
  scanf("%s %d",a,&k);
  n=strlen(a);
  for(i=0;i<k;i++)
  {
    printf("%c",a[i]);
  }
  
  return 0;
}
