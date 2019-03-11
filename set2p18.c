#include <stdio.h>
#include<string.h>
int main()
{
   char c[6]={'k','a','b','a','l','i'};
   char a[50][50];
   int i,j,k,count=0,n,t=0,m;
  scanf("%d",&n);
 
   for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
  for(i=0;i<n;i++)
  {
      m=strlen(a[i]);
      for(j=0;j<m;j++)
      {
          for(k=0;k<6;k++)
          {
            if(a[i][j]==c[k])
            {
              ++count;
              break;
            }
          }
      }
      if(count==m && m==6)
      {
          t++;
      }
     count=0;
     m=0;
  }
  printf("%d",t);
    return 0;
}
