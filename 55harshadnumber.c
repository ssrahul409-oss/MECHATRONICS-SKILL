#include<stdio.h>
int main()
{
    int n,num,sum=0;
    scanf("%d",&num);
    n=num;
    for(int i=num;num>0;num=num/10)
    {
        int a=num%10;
        sum+=a;
        
        

    }
    if(n%sum==0)
    {
        printf("%d is Harshad Number",n);
    }
    else{
        printf("%d is Not Harshad Number",n);
    }
    return 0;
}