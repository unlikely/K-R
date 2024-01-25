#include <stdio.h>

main()
{
  double nc;

  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);
}
// for some reason this is printing an extra "D" when exiting with crtl-d.
// maybe a mac terminal thing? might spin up a linux VM later to test.