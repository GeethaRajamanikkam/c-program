#include <stdio.h>
#include<string.h>
int main(void) {
  char a[100],b[100];
  int n,i,j,m,c=0;
  scanf("%s %s",a,b);
  n=strlen(a);
  m=strlen(b);
  for(i=n-m;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      if(a[i]==b[j])
      {
        c++;
        break;
      }
    }
  }
  if(c==m)
  printf("yes");
  else
  printf("no");
  return 0;
}
