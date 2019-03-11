#include <stdio.h>
int main() 
{
	int n,k,a;
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
		if(n%k==0)
		{
			a=n/k;
			if(a%2==1)
			{
				printf("%d",k);
				break;
			}
		}
	}
}
