#include<stdio.h>
int main()
{
    int num,sq,temp;
    scanf("%d",&num);
    sq=num*num;
    temp=num;
    while(temp>0)
    {
        int a=temp%10;
        int b=sq%10;
        if(a!=b)
        {
            printf("%d not automorphic number",num);
            return 0;
        }
        temp/=10;
        sq/=10;



    }
    printf("%d is Automorphic number",num);
    return 0;
}