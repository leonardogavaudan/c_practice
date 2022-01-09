#include <stdio.h>
#include <inttypes.h>
#include <string.h>

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}

uint64_t descendingOrder(uint64_t n)
{
    int digits[10];
    uint64_t result = 0;

    memset(digits, 0, sizeof(digits));

    while (n > 0)
    {
        printf("n % 10: %d \n", n % 10);
        digits[n % 10]++;
        printf("digits element: %d \n", digits[n % 10]);
        n /= 10;

        printf("digits: ");
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", digits[i]);
        }
        printf("\n");
    }

    for (int i = 9; i >= 0; i--)
    {
        printf("current digit: %d \n", digits[i]);

        while (digits[i] > 0)
        {
            printf("result_1: %d\n", result);
            result *= 10;
            printf("result_2: %d\n", result);
            result += i;
            digits[i]--;
            printf("result_3: %d\n", result);
        }
    }

    return result;
}

int main(int argc, char *argv[])
{

    uint64_t n = 123;
    uint64_t result = descendingOrder(n);
    printf("result: %d \n", result);

    return 0;
}
