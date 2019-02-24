#include <stdio.h>
#include<string.h>
int main(void) {
	char a[100];
	int n;
	scanf("%s",a);
	n=strlen(a);
	if(n%2==0)
	{
		a[n/2]='*';
		a[(n/2)-1]='*';
	}
	else
	{
		a[n/2]='*';
	}
	printf("%s",a);
	return 0;
}
