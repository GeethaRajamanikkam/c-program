#include <stdio.h>

int main(void) {
	int i,n,a,d,s=0;
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&d);
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			s=s+a;
		}
		else
		{
			a=a+d;
			s=s+a;
			
		}
	}
	printf("%d",s);
	return 0;
}
