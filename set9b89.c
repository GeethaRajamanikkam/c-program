#include <stdio.h>
#include<string.h>
int main(void) {
	char b[100];
	int n,i;
	scanf("%s",b);
	n=strlen(b);
	for(i=n-1;i>=0;i--)
	{
		printf("%c",b[i]);
	}
	
	return 0;
}
