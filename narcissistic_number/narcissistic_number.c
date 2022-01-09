#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool narcissistic(int num)
{
    int result = 0;
    int temp = num;
    int number_of_digits = 0;

    while (num)
    {
        num /= 10;
        number_of_digits++;
    }

    num = temp;

    while (num)
    {
        result += pow((num % 10), number_of_digits);
        num /= 10;
    }

    num = temp;
    return result == num;
}

int main()
{
    int input = 153;
    bool output = narcissistic(input);
    printf("%d\n", output);
}