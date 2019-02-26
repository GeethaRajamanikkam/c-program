#include <stdio.h>

int main()
{
int n1,n2,j,n,b,s,r;
    scanf("%d %d",&n1,&n2);
    for(j=n1;j<n2;j++)
    {
        n=j;
        b=j;
        s=0;
        while(n)
        {
            r=n%10;
            s=s+r*r*r;
            n=n/10;
        }
        if(j==s)
        {
            printf("%d",j);
        }
    }
    return 0;
}
