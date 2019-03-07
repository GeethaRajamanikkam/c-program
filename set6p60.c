#include <stdio.h>
#include<string.h>
int main(void) {
  char a[100],b[10];
  int i,n;
  scanf("%s",a);
  scanf("%s",b);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
    if(a[i]==b[i])
    {
      printf("yes");
      break;
    }
    else
    {
      printf("no");
      break;
    }
  }
 
  
  return 0;
}
