#include<stdio.h>
int main()
{
    int num,sum=0;
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%2==0)
        {
            sum+=i;
        }
    }
    if(sum>num)
    {
        printf("%d is abundant number",num);
    }
    else
    {
        printf("%d not abundant number",num);
    }
    return 0;
}