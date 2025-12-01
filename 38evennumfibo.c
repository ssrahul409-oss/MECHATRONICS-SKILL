#include<stdio.h>
int main()
{
    int num,num1=0,num2=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num1%2==0)
        printf("%d ",num1);
    int a=num1+num2;
    num1=num2;
    num2=a;
    }
    return 0;
}