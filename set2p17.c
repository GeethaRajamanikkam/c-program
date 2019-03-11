#include <stdio.h>
int main()
{
int a,b,i;
scanf("%d %d",&a,&b);
if((a>=1&&b<=100000)&&(a>=1&&b<=100000))
{
for(i=1;;i++)
 {
    if(i%a==0&&i%b==0)
    {
        
        printf("%d",i);
        break;
    }  
 }
}
return 0;
}   
