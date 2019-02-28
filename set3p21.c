#include <stdio.h>
#include<string.h>
int main(void) {
  int a[100],b[100],i,flag;
    for(i=0;i<3;i++)
     {
    scanf("%d %d",&a[i],&b[i]);
     } 
    for(i=0;i<3;i++)
    {
      if(a[i]==a[i+1] || b[i]==b[i+1])
     {
      flag=1;
      break;
     }
    }
    if(flag==1)
    printf("yes");
    else
    printf("No");
  return 0;
}
