#include<stdio.h>
int main()
{
    int num,count=0,a;
    scanf("%d",&num);
    while(num!=1)
    {
        if(num%2==0)
        {
             a=num/2;
        }
        else
        {
            a=(num*3)+1;
        }
        num=a;
        count++;
    }
    printf("%d",count);
    
    return 0;
}