#include <stdio.h>
#include<string.h>
int main(void) {
  char a[100],b[100];
  int i,c=0,n,j,m;
  scanf("%s %s",a,b);
  n=strlen(a);
  m=strlen(b);
  if(n==m)
  {
  for(i=0;i<n;i++)
   {
      if(a[i]==b[i])
     {
      c++;
     }
     else
     {
       c=0;
       break;
     }
    }
  }
     if(c==n)
     printf("yes");
     else
     printf("no");
  return 0;
}
