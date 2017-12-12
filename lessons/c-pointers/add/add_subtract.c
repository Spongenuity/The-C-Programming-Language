#include <stdio.h>

void add_subtract(int *a, int *b)
{
    int sum = *a + *b;
    int diff = *a - *b;

    *a = sum;
    *b = diff;
}

int main(void)
{
	int a = 30, b = 5;

	add_subtract(&a, &b);

	if (a == 35 && b == 25) {
		printf("SUCCESS\n");
	}

	a = 100;
	b = 50;
    add_subtract(&a, &b);

	if (a == 150 && b == 50) {
		printf("SUCCESS\n");
	}

	return 0;
}