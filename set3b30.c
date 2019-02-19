#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m1,hr1,m2,hr2,m3,hr3;

	scanf("%d %d",&hr1,&m1);

	scanf("%d %d",&hr2,&m2);
	hr3=abs(hr1-hr2);
		m3=abs(m1-m2);
	printf("%d %d",hr3,m3);
}
