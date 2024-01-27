#include <stdio.h>

main()
{
  int c, lastchar;

  while ((c = getchar()) != EOF) {
    if (c != ' ')
      putchar(c);
    if (c == ' ')
      if (lastchar != ' ')
        putchar(c);
    lastchar = c;
  }

  
}