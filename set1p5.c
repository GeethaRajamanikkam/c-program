#include <stdio.h>
#include<string.h>
int main()
{
       char m[30];
   int a[100], n, i, b;
   scanf("%s", m);
   n=strlen(m);
   for(i = 0; i < n; i++)
   {
      switch (m[i])
      {
     case 'I':  
     a[i] = 1;
        break;
     case 'V':  
     a[i] = 5;
          break;
     case 'X':  
     a[i] = 10;
           break;
     case 'L':  
     a[i] = 50;
            break;
     case 'C':  
     a[i] = 100;
            break;
     case 'D':  
     a[i]=500;
            break;
     case 'M': 
     a[i] = 1000;
            break;

   }
   }
   b = a[n - 1];
   for(i = n - 1; i > 0; i--)
   {
      if(a[i] > a[i - 1])
      {
     b = b - a[i - 1];
      }
      if(a[i] <= a[i - 1])
      {
     b = b + a[i - 1];
      }
   }
   printf("%d", b);

    return 0;
}
