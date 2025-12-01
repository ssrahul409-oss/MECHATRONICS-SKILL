#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        float a=1.0/i;
        sum+=a;
    }
    printf("%.2f",sum);
    return 0;
}