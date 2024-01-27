#include <stdio.h>

main()
{
  int c, nl;

  nl = 0;
  while ((c = getchar()) != EOF)
  // modified per exercise 1-8 to also count spaces and tabs
    if (c == '\n' || c == ' ' || c == '\t')
      ++nl;
    printf("%d\n", nl);
}