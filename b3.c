#include <stdio.h>

int main(void) {
  char ch;
  scanf("%c",&ch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
  {
    printf("Vowel");
  }
  else if(ch=='b'||ch=='c'||ch=='d'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='n'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z')
  {
    printf("Consonent");
  }
  else
  {
    printf("Invalid");
  }
  
  return 0;
}
