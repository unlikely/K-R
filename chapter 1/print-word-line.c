#include <stdio.h>

#define IN 1
#define OUT 0

<<<<<<< HEAD
=======
// modifeid version of word counter, still has that logic in it
>>>>>>> 7182956 (section 1.5.4, word counting)
main()
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      putchar('\n');
    } else if (state == OUT) {
      state = IN;
      ++nw;
    }
    if (state == IN) {
      putchar(c);
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}