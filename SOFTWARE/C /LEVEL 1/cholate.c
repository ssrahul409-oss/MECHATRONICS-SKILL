#include <stdio.h>
int main()
{
  int nochoco, consumed, days, x, y, z, q;
  scanf("%d %d %d", &nochoco, &consumed, &days);
  x = consumed * days;

  if (nochoco > x)
  {
    printf("1\n");
    y = nochoco - x;
    z = y / consumed;
    printf("No of days left to finish eating: %d", z);
  }
  else
  {
    printf("2");
  }

  return 0;
}