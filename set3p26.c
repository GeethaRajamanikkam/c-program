#include <stdio.h>
int main()
{
  char a[50];
  int i,j,k,l;
  scanf("%[^\n]s",a);
  for(i=0;a[i]!='\0';i++)
  {
    
      if(a[i]==' ' && a[i+1]==' ')
      {
         k=i+2;
         j=i;
         for(l=k;a[l]!='\0';l++)
         {
             a[j]=a[l];
             j++;
         }
         a[j]='\0';
         break;
      }

  }
  printf("%s",a);
  return 0;
  
}
