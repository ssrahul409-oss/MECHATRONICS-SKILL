#include <stdio.h>
int main()
{
  int A, B, C;
  char *result;
  scanf("%d %d %d", &A, &B, &C);
  if (A > 0 && B > 0 && C > 0 && (A + B + C == 180))
  {
    result = "Valid Triangle";
  }
  else
  {
    result = "Invalid Triangle";
  }
  printf("Expected Result:%s\n", result);

  return 0;
}