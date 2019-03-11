#include <stdio.h>
int main()
{
    char b[100];
    int i,s,j;
    scanf("%[^\n]",b);
    for(i=0;b[i]!='\0';i++)
    {
        s=0;
        for(j=0;b[j]!='\0';j++)
        {
            if(b[i]==b[j])
            {
                s++;        
            }
        }
      if(s==1)
        printf("%c\t",b[i]); 
    }
    
    return 0;
}
