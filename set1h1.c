#include <stdio.h>

int main(void) {
  int a[100],i,n,j,b[100],k=0,t,flag=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]==a[j])
      {
        b[k]=a[i];
        k++;
       break;
      }
    }
  }
  for(i=0;i<k;i++)
  {
    for(j=i+1;j<k;j++)
    {
      if(b[i]>b[j])
      {
        t=b[i];
        b[i]=b[j];
        b[j]=t;
      }
    }
  }
  for(i=0;i<k;i++)
  {
    flag=1;
    if(b[i]!=b[i+1])
    {
    printf("%d\t",b[i]);
    }
  }
  if(flag==0)
  printf("unique");
  return 0;
}
