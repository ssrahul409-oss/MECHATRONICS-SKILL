#include <stdio.h>
int main()
{
  int x;
  char *result;
  scanf("%d", &x);
  if (x <= 0)
  {
    result = "Expected Order has no proper quality specified. Thank YOU!";
  }
  else if (x >= 70)
  {
    result = "Order Limit Reached. Thank YOU!";
  }
  else
  {
    result = "Order Confirmed. Thank YOU!";
  }
  printf("Expected Output:%s", result);

  return 0;
}