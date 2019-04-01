#include <stdio.h>
#include<string.h>
int main(void) {
  int a[100],n,i,m,b[100],c[100],k=0,temp,j;
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    c[k]=a[i];
    k++;
  }
  for(i=0;i<m;i++)
  {
    scanf("%d",&b[i]);
    c[k]=b[i];
    k++;
  }
  for(i=0;i<k;i++)
  {
    for(j=i+1;j<k;j++)
    {
      if(c[i]>c[j])
      {
        temp=c[i];
        c[i]=c[j];
        c[j]=temp;
      }
    }
  }
  for(i=0;i<k;i++)
  {
    printf("%d\t",c[i]); 
  }
  return 0;
}
