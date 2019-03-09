#include<stdio.h>
int main()
{
    int a,k,i,n=1,c=0;
    scanf("%d %d",&a,&k);
    for(i=1;i<=a;i++)
    {
       n=n*k;
        if(n==a)
        {
            c++;
            break;
        }
        
     }
        if(c==0)
        printf("no");
        else
        printf("yes");
  return 0;
}
