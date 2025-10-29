#include <stdio.h>

int main()
{
  char name[50];
  int age, gender;

  scanf("%s", &name);
  scanf("%d", &age);
  scanf("%d", &gender);

  if (age < 18 || age <= 0)
  {
    printf("Eligibility Status: Not Eligible\n");
    printf("Salutation: None (or handle as per system design)\n");
  }
  else
  {

    if (gender == 1)
    {
      printf("Eligibility Status: Eligible\n");
      printf("Salutation: Mr. %s\n", name);
    }
    else if (gender == 2)
    {
      printf("Eligibility Status: Eligible\n");
      printf("Salutation: Ms. %s\n", name);
    }
    else
    {
      printf("Please type a valid gender\n");
    }
  }

  return 0;
}
