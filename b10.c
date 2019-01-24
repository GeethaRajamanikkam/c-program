#include <stdio.h>

int main(void) {
 long long int n;
 int r,c=0;
  scanf("%lld",&n);
  while(n)
  {
    r=n%10;
    c++;
    n=n/10;
  }
    printf("%d",c);
  return 0;
}
