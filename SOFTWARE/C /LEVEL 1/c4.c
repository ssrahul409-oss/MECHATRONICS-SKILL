#include <stdio.h>
int main()
{
  long long c, s, p;
  scanf("%lld", &c);
  scanf("%lld", &s);
  if (c < 0)
  {
    printf("Invalid p");
  }
  if (s < 0)
  {
    printf("Invalid s");
  }
  p = s - c;
  if (p > 0)
  {
    printf("p=%lld\n", p);
    printf("Result: Profit\n");
  }
  else if (p < 0)
  {
    printf("p=%lld\n", p);
    printf("Result: Loss\n");
  }
  else
  {
    printf("p=%lld\n", p);
    printf("Result: Break");
  }
  return 0;
}