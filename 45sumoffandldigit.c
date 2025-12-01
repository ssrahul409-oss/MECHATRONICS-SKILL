#include<stdio.h>
int main()
{
    int num,a,b,sum=0;
    scanf("%d",&num);
    a=num%10;
    while(num>0)
    {
        b=num%10;
        num/=10;
        if(num<10)
        {
            sum+=num;
        }
    }
    int c=a+sum;
    printf("\n%d",c);
    return 0;
}