#include <stdio.h>

int main(void) {
  foo:
  printf("%p\n",&&foo);
  fgetc(stdin);
  return 0;
}
