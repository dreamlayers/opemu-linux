#include <stdio.h>

int main(void) {
  int a = 257;
  asm( "popcnt %0, %0" : "+rm" (a) );
  printf("%i\n", a);
  return 0;
}
