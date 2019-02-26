#include <stdio.h>
#include<string.h>
int main(void) {
  char a[100];
  int i,n,m;
  scanf("%d",&n);
  scanf("%s",a);
  m=strlen(a);
  for(i=m;i>=0;i--)
  {
    if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U')
    {
      printf("%c",a[i]);
    }
  }
  return 0;
}
