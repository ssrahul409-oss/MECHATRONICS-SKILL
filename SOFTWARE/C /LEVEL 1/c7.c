#include <stdio.h>
int main()
{
  int railwaytime, minute, hour;
  char *period;
  scanf("%d", &railwaytime);
  if (railwaytime < 0 || railwaytime > 2359 || railwaytime == 2400)
  {
    printf("Invalid Time\n");
    return 0;
  }
  hour = railwaytime / 100;
  minute = railwaytime % 100;
  if (minute < 0 || minute > 59)
  {
    printf("Invalid\n");
    return 0;
  }
  else if (hour == 0)
  {
    hour = 12;
    period = "AM";
  }

  else if (hour > 12)
  {
    hour = hour - 12;
    period = "PM";
  }

  else if (hour == 12)
  {
    hour = 12;
    period = "PM";
  }
  else
  {
    hour == hour;
    period = "AM";
  }
  printf("12-HourTime Format:%d %02d %s", hour, minute, period);

  return 0;
}
