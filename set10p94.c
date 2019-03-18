#include <stdio.h>
#include<string.h>
int main(void) {
  int n,i,c=0,j;
  char a[100];
  scanf("%s",a);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
    if(a[i]==a[j])
    {
      c++;
      break;
    }
    }
  }
  if(c!=0)
  {
  printf("yes");
  }
  if(c==0)
  {
    printf("no");
  }
  return 0;
}
