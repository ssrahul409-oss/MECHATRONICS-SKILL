#include<stdio.h>
int main()
{
    int num,sum=0,temp;
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        int a=temp%10;
        int fact=1;
        for(int i=1;i<=a;i++)
        {
            fact=fact*i;
           
        }
        sum+=fact;
        temp/=10;

    }
    if(sum==num)
    {
        printf("S");
    }
    else
    {
        printf("NS");
    }

}