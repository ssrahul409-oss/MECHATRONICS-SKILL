#include<stdio.h>
int main()
{
    int num,sum=0;
    scanf("%d",&num);
    int c=num-2;
    for(int i=1;i<num;i++)
    {
        if(num%i!=0)
        {
            sum++;
            continue;
        }
    }
    if(sum==c)
    {
        printf("Prime");
    }
    else
    {
        printf("composite");
    }
    return 0;
}