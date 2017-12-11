/**
 * Classic hello, world
 * 
 * Compile with
 * 
 *   gcc -Wall -Wextra -o hello hello.c
 * 
 * or 
 * 
 *   clang -Wall -Wextra -o hello hello.c
 * 
 * Then run with
 * 
 *   ./hello
 */



 #include <stdio.h>
 #include <math.h>

 int sqroot()
{
    printf("Square root of %lf is %lf\n", 128934.0, sqrt(128934.0) );
    return 0;
}

 int main(void)
 {
     printf("Hello, world!\n");
     sqroot();

     return 0;
 }