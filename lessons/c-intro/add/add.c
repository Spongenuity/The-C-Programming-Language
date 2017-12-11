/**
 * Function to add two ints
 * 
 * Compile with
 * 
 *   gcc -Wall -Wextra -o add add.c
 * 
 * or 
 * 
 *   clang -Wall -Wextra -o add add.c
 * 
 * Then run with
 * 
 *   ./add
 */
#include <stdio.h>
#include <math.h>

int add(int a, int b)
{
    return a + b;
}

int intsqrt (int x)
{
    return sqrt(x);
}

int main(void)
{
    int result = add(3, 4);

    printf("3 + 4 = %d\n", result);


    double squrtres = intsqrt(81);
    printf("Square root of 81 is %lf\n", squrtres );

    return 0;
}
