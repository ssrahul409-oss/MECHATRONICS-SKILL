#include<stdio.h>
int main()
{
    int num,a,i,sum=0;
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
         a=i*i;
        
    }
    if(a==num)
        {
            printf("%d is Perfect Square",num);
            sum++;
        }
        else
        {
            printf("%d is Not Perfect Square",num);
        }
    return 0;
}