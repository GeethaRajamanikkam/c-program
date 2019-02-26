#include <stdio.h>

int main()
{ 
 int a,b;
 char n;
 scanf("%d %c %d",&a,&n,&b);
 if(n=='/')
 {
  printf("%d",a/b);
 }
  else
  {
     printf("%d",a%b);
  }
    
}
