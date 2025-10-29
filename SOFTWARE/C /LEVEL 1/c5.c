#include <stdio.h>
int main()
{
  char name[50];
  int age;
  int gender;
  char *elligible;
  scanf("%s", &name);
  scanf("%d", &age);
  scanf("%d", &gender);
  if (age < 0)
  {
    elligible = "Elligible";
  }
  if (age >= 18)
  {
    elligible = "Elligible";
  }
  if (gender != 1 && gender != 2)
  {
    printf("Invalid gender\n");
  }
  else
  {
    printf("%s", )
        printf("Eligiblity satus:%s", elligible);
  }
  return 0;
}