#include <stdio.h>
#include<string.h>
int main(void) {
  char a[100];
  int i;
  scanf("%[^\t\n]s",a);
  for(i=0;a[i]!='\0';i++)
  {
    a[0]=a[0]-32;
    if(a[i]==' '&&a[i+1]>='a'&&a[i+1]<='z')
    {
      a[i+1]=a[i+1]-32;
    }
    else if(a[i]==' '&&a[i+1]>='A'&&a[i+1]<='Z')
    {
      a[i+2]=a[i+2]+32;
      a[i+3]=a[i+3]+32;
    }
    printf("%c",a[i]);
  }
  
  return 0;
}
