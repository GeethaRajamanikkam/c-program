#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100];
	int n=0,num=0;
	scanf("%s",a);
	int i,m;
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		if(('a'<=a[i] && a[i]<='z') || ('A'<=a[i] && a[i]<='Z'))
		{
			n=1;
		}
		if('0'<=a[i] && a[i]<='9')
		{
			num=1;
		}
	}
	if(num==1 && n==1)
	{
		printf("yes");
	}
	else
		printf("no");
}
