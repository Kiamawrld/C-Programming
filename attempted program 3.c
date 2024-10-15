#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    d = a + b + c;
    printf("%d + %d + %d = %d\n", a, b, c, d);
    return 0;
}
