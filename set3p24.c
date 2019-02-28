#include <stdio.h>
#include<string.h>
int main(void) {
 char a[100];
 int i,n,flag=0;
  scanf("%s",a);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
   if(a[i]>='0' && a[i]<='9')
   {
     flag++;
   }
  }
  if(flag==n)
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
