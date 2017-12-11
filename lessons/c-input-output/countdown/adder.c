#include <stdio.h>
#include <math.h>


int main (void)
{
    int a;
    int b;

    printf("Enter a value: ");
    scanf("%d", &a);
    printf("You entered %d\n", a);

    printf("Enter a second value: ");
    scanf("%d", &b);
    printf("You entered %d\n", b);

    printf("%d + %d = %d\n", a, b, a+b);

    return 0;
}