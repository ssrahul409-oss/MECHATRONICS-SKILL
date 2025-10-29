#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x1, x2, y1, y2, x, y, z;
  scanf("%d %d\n", &x1, &x2);
  scanf("%d %d", &y1, &y2);
  x = abs(x2 - x1);
  y = abs(y2 - y1);
  z = x + y;

  printf("|x2-x1|+|y2-y1|: %d", z);

  return 0;
}