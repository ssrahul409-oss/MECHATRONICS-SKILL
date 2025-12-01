#include<stdio.h>
int main()
{
int num,even=0,odd=0;
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
    if(i%2==0)
    {
        even+=i;
    }
    else
    {
        odd+=i;
    }
}
printf("\n%d EVEN",even);
printf("\n%d ODD",odd);
}