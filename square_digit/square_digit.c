#include <string.h>
#include <stdio.h>
#include <math.h>

#define arr_length 10

unsigned long long square_digits(unsigned n)
{
    int arr[arr_length];
    int index = 0;
    int rest;

    memset(arr, 0, sizeof(arr));

    while (n > 0 && index < arr_length)
    {
        rest = n % 10;
        arr[index] = pow(rest, 2);

        n /= 10;
        index++;
    }

    unsigned long long result = 0;
    int power = 0;

    for (int i = 0; i < 10; i++)
    {
        result += pow(10, power) * arr[i];

        power += arr[i] < 10 ? 1 : 2;
    }
    return result;
}

int main(int argc, char *argv[])
{
    int input = 10209;
    int result = square_digits(input);
    printf("input: %d\n", input);
    printf("result: %d\n", result);

    return 0;
}