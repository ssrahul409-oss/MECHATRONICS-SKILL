#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num<=0 || num>40)
    {
        printf("Invalid");
        return 0;
    }
    while(num>=10)
    {
        printf("X");
        num-=10;
    }
    if(num==9)
    {
        printf("IX");
        return 0;
    }
    while(num>=5)
    {
        printf("V");
        num-=5;
    }
    if(num==4)
    {
        printf("IV");
        return 0;
    }
    while(num>0)
    {
        printf("I");
        num-=1;
    }
    return 0;
}