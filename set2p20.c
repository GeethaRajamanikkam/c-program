#include <stdio.h>

int main(void) {
  char a[100];
  int i;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]=='X')
    printf("A");
    else if(a[i]=='Y')
    printf("Y");
    else if(a[i]=='Z')
    printf("C");
    else 
    printf("%c",a[i]+3);
  }
  return 0;
}
