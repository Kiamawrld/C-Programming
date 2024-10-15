#include <stdio.h>

int main(void)
{
    int b;
    printf("Enter a number: ");
    scanf("%d", &b);
    if (b < 0)
    {
        printf("The number you entered is a negative number.");
    }
    else if (b == 0)
    {
        printf("The number you entered is zero.");
    }
    else
    {
        printf("The number you entered is a positive number.");
    }
    return 0;
}
