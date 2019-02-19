#include <stdio.h>
int main(void) {
 int min,hr,r;
 scanf("%d",&min);
 hr=min/60;
 r=min-(60*hr);
 printf("%d : %d",hr,r);
  return 0;
}
