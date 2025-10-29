#include <stdio.h>
int main()
{
  float L, W, area;
  scanf("%f", &L);
  scanf("%f", &W);
  if (L <= 0 && W <= 0)
  {
    printf("Invalid(Length and width cannot be negative or zero)\n ");
    printf("Area: Invalid\n");
  }
  else if (L <= 0)
  {
    printf("Shape: Invalid (Length cannot be negative or zero0\n)");
    printf("Area: Invalid\n");
  }
  else if (W <= 0)
  {
    printf("Shape: Invalid (Width cannot be negative or zero)\n");
    printf("Area: Invalid\n");
  }
  else
  {
    area = L * W;
    if (L == W)
    {
      printf("Shape: Square\n");
    }
    else
    {
      printf("Shape: Rectancle\n");
    }
    printf("Area: %.2f\n", area);
  }
  return 0;
}