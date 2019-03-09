#include <stdio.h>

int main(void) {
	int n,temp=0;
	scanf("%d",&n);
	int a[50],i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int c=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c=c+1;
			}
			if(a[i]!=a[j])
			{
       break;
			}
		}
		if(c>temp)
		{
			temp=c;
		}
	}
	printf("%d",temp);
	return 0;
}
