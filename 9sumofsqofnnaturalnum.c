#include<stdio.h>
int main()
{
    int n,s=0,sq;
    scanf("%d",&n);
    if(n<0)
    {
        printf("Invalid Input");
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        sq=i*i;
        s=s+sq;
    }
    printf("%d",s);
    return 0;
}