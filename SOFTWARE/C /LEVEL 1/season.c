#include <stdio.h>
int main()
{
  int month;
  int day;
  scanf("%d", &month);
  scanf("%d", &day);
  if (month < 1 || month > 12 || day < 1 || day > 31)
  {
    printf("Invalid\n");
    return 0;
  }
  if ((month == 3 && day >= 20) || (month > 3 && month < 6) || (month == 6 && day <= 20))
  {
    printf("Season:spring\n");
  }
  else if ((month == 6 && day >= 21) || (month > 6 && month < 9) || (month == 9 && day <= 21))
  {
    printf("Season:Summer\n");
  }
  else if ((month == 9 && day >= 22) || (month > 9 && month < 12) || (month == 12 && day <= 20))
  {
    printf("Season:autumn\n");
  }
  else
  {
    printf("Season:winter\n");
  }

  return 0;
}