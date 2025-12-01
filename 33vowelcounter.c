#include<stdio.h>
int main()
{
    char ch;
    int count=0;
    while((ch=getchar())!='\n')/*((ch = getchar()) != '\n')*/
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            count++;
        }
        
    }
    printf("%d",count);
    return 0;
}