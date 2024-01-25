#include <stdio.h>

main()
{
  int c;

  c = getchar();
  while (c != EOF) {
    printf("\n value of c != EOF: %d\n", (c != EOF));
    putchar(c);
    c = getchar();
  }
}