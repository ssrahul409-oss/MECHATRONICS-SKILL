#include<stdio.h>
int main()
{
    int num,count=0,sum=0;
    scanf("%d",&num);
    for(int i=num;num>0;i++)
    {
        int a=num%10;
        printf("%d",a);
        count++;
        num/=10;
    }
    printf(" %d",count);
    return 0;
}