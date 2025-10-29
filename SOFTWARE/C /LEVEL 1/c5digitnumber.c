#include <stdio.h>
int main()
{
  int num;
  scanf("%d", &num);
  if (num >= 10000 && num <= 99999 || num <= -10000 && num >= -99999)
  {
    printf("Entered Number is Five Digitnumber\n");
  }

  else
  {
    printf("Entered Nunber is Not Five Digitnumber\n");
  }
  return 0;
}