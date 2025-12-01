#include<stdio.h>
int main()
{
    int num,sum=0;
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            printf("%d ",i);
            sum+=i;
        }

    }
    printf("\n%d",sum);
    if(num==sum)
    {
        printf("\nequal");
    }
    else
    {
        printf("\nnot equal");
    }

}