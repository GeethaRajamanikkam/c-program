#include <stdio.h>
int main(void)
{
	int a;
	scanf("%d",&a);
  int i=2;
	while(i<=a)
	{
		if(i==a)
		{
			printf("yes");
		}
		i=i*2;
    }
	return 0;
}
