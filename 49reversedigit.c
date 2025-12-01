#include<stdio.h>
int main()
{
    int num,a;
    scanf("%d",&num);

    if(num<0)
    {
        printf("x is not a Positive Number");
        return 0;
    }
    
    for(int i=num;num>0;num=num/10)
    {
        a=num%10;
        printf("%d",a);
        
        
       
    }
    
    
    return 0;
}