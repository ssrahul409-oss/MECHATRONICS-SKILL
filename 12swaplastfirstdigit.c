#include <stdio.h>
#include <string.h>

int main()
{
    char num[20];
    scanf("%s", num);

    int len = strlen(num);

    // If number has only 1 digit, no swap needed
    if(len == 1) {
        printf("%s", num);
        return 0;
    }

    // Swap first and last characters
    char temp = num[0];
    num[0] = num[len - 1];
    num[len - 1] = temp;

    printf("%s", num);

    return 0;
}
