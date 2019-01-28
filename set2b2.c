#include <stdio.h>

int main(void) {
  int n,s=0,r,temp; 
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
    r=n%10;
    s=s*10+r;
    n=n/10;
  }
  if(temp==s)
  {
  printf("Yes");
  }
  else{
  printf("No");
  }
   return 0;
}
