#include<stdio.h>
int main()
{
    int year,count=0;
    scanf("%d",&year);
    if((year%400==0) || (year%4==0 && year%100!=0))
    {
        printf("%d is Leap Year",year);
    }
    else{
        printf("%d is not Leap Year",year);
    }
    for(int i=year+1;i<year+10;i++)
    {
        if((i%400==0) ||(i%4==0) && (year%100!=0))
        {
            count++;
        }
    }
    printf("\n%d Leap Year:",count);
    printf("\n%d Non Leap Year:",10-count);
    return 0;
}