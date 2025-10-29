#include <stdio.h>
int main()
{
  int salary;
  float bonus = 0;
  char gender;
  scanf("%d", &salary);
  scanf(" %c", &gender);
  if (salary < 0 || salary >= 2147483646)
  {
    printf("Expected Output: Bonus=Rs. 0 (Invalid salary,no bonus)");
    return 0;
  }