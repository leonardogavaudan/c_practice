#include <stdio.h>

int digital_root(int n)
{
    int total = 0;
    int modulo_rest;

    while (n)
    {
        modulo_rest = n % 10;
        total += modulo_rest;
        n /= 10;
    }

    return total < 10 ? total : digital_root(total);
}

int main()
{
    int input = 493193;
    int output = digital_root(input);

    printf("input: %d\n", input);
    printf("output: %d\n", output);
}
