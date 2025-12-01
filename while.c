#include<stdio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);
    while(i<n)
    {
        printf("Hello World\n");
        fflush(stdout);
        i++;
    }
    return 0;
}