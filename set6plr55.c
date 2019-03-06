#include <stdio.h>
#include<string.h>
int main(void) {
  char a1[100],b1[100];
  int i,s=0,n1,j,m1;
  scanf("%s %s",a1,b1);
  n1=strlen(a1);
  m1=strlen(b1);
  if(n1==m1)
  {
  for(i=0;i<n1;i++)
   {
      if(a1[i]==b1[i])
     {
      s++;
     }
     else
     {
       s=0;
       break;
     }
    }
  }
     if(s==n1)
     printf("yes");
     else
     printf("no");
  return 0;
}
