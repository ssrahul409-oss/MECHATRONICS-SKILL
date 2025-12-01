#include<stdio.h>
int main()
{
    int num,sum=0,n;
    scanf("%d",&num);
    n=num;
    for(;n>0;n++)
    {
        int a=num%10;
        int b=a*a*a;
        sum+=b;
        num/10;


        
    }
    printf("%d",sum);
    if(n==sum)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}