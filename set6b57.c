#include <stdio.h>
int main()
{
  
  int n,k,i,c,count;
  int a[10];
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  count=0;
  for(i=0;i<n;i++)
  {
      if(a[i]==n)
      {
          c++;
      }
  }
  printf("%d",c);
	
return 0;
}
