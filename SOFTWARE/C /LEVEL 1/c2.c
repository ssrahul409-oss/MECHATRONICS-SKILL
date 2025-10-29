#include <stdio.h>
#include <math.h>
int main()
{
  double p, r, t, a;
  scanf("%lf", &p);
  scanf("%lf", &r);
  scanf("%lf", &t);
  if (p < 1 || p > 2147483647)
  {
    printf("Invalid p\n");
  }
  else if (r < 1.0 || r > 8.5)
  {
    printf("Invalidr\n");
  }
  else if (t < 0)
  {
    printf("Invalidt\n");
  }
  else
  {
    a = p * pow((1 + r / 100), t);
    printf("a: %.2f\n", a);
  }

  return 0;
}