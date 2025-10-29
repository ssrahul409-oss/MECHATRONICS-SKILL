#include <stdio.h>
int main()
{
  float A, B;
  float X;
  scanf("%f %f", &A, &B);
  if (A == 0 && B == 0)
  {
    printf("Invalid\n");
  }
  if (A == 0 && B != 0)
  {
    printf("No Solution\n");
  }
  else
  {
    X = -B / A;
    printf("X=%.2f", X);
  }
  return 0;
}