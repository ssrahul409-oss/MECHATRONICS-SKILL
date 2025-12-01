#include<stdio.h>
int main()
{
    int num,add=0,sum=0;
    scanf("%d",&num);
    for(int i=num+1;sum<5;i++)
    {
        add=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                add++;
                break;
            }
        }
        if(add==0)
        {
            printf(" %d",i);
            sum++;
        }
    }
    return 0;
}