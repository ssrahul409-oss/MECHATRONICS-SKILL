#include <stdio.h>
int main()
{
  int salary;
  float bonus;
  char gender;

  scanf("%d", &salary);
  scanf(" %c", &gender);
  if (salary < 0)
  {
    printf("Invalid Bonus 0\n");
    return 0;
  }
  if (salary < 25000)
  {
    bonus = 5000;
  }
  else if (salary >= 25000 && salary <= 50000)
  {
    bonus = 7500;
  }
  else
  {
    if (gender == 'M')
    {
      bonus = (salary * 10.0) / 100;
    }
    else
    {
      bonus = (salary * 15.0) / 100;
    }
  }
  printf("%.2f", bonus);

  return 0;
}