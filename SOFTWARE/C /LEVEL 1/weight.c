#include <stdio.h>
int main()
{
  float weight;
  float Rupee;
  float R;
  scanf("%f", &weight);
  if (weight <= 5)
  {
    Rupee = 5;
    R = weight * Rupee;
  }
  if (weight > 5 && weight < 10)
  {
    Rupee = 7;
    R = weight * Rupee;
  }
  if (weight >= 10)
  {
    Rupee = 10;
    R = weight * Rupee;
  }

  printf("Rupee: %.2f", R);
  return 0;
}