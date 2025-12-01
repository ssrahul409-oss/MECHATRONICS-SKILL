#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid");
    }
    for(i=1;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("%c ",65+i);
        }
        printf("\n");
    }
    return 0;
}