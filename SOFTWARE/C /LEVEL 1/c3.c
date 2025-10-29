#include <stdio.h>
#include <math.h>
int main()
{
  long long sbase, sbonus, sallowance, e, stotal;
  double p, s;

  scanf("%lld", &sbase);
  scanf("%lld", &sbonus);
  scanf("%lld", &sallowance);
  scanf("%lld", &e);
  if (sbase < 0)

  {
    printf("Invalid sbase\n");
  }
  if (sbonus < 0)
  {
    printf("Invalid sbonus\n");
  }
  if (sallowance < 0)
  {
    printf("Invalid sallowance\n");
  }
  if (e < 0)
  {
    printf("Invalid e");
  }

  stotal = sbase + sbonus + sallowance;
  s = stotal - e;
  p = (s / stotal) * 100;
  if (p < 0)
  {
    printf("Invalid p");
    return 0;
  }
  else
  {
    p = (s / stotal) * 100;
  }

  printf("%lld %.0f %.2f%%", stotal, s, p);
  return 0;
}