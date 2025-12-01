#include<stdio.h>
int main()
{
    int num,rev=0,temp;
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        int a=temp%10;
        rev=rev*10+a;
        temp/=10;
    }
    if(num==rev)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}