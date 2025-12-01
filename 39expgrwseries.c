#include<stdio.h>
int main()
{
    int n,series,temp;
    scanf("%d %d",&n,&series);
    temp=series;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",temp);
        temp*=2;
    }
    

    return 0;
}