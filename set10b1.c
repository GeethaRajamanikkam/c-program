#include <stdio.h>

int main(void) {
  int l,b,h,volume,area;
  scanf("%d %d %d",&l,&b,&h);
  area=2*((l*b)+(l*h)+(b*h));
  volume=l*b*h;
  printf("%d %d",area,volume);
  return 0;
}
