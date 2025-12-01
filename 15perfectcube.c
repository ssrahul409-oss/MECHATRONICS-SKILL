#include<stdio.h>
int main()
{
    int num,count=0;
    scanf("%d",&num);
    if(num<=0)
    {
        printf("Invalid");
        return 0;
    }
    for(int i=num+1;count<3;i++)
    {

        int a=num*num*num;
        num+=1;
        printf("%d\n",a);
        count++;

    }
    return 0;
}