#include <stdio.h>
#include <stdlib.h>

char *breakCamelCase(char *input)
{
    char *result = malloc(100);
    char *initial_pointer = result;

    while (*input)
    {
        if (*input >= 'A' && *input <= 'Z')
            *result++ = ' ';

        *result++ = *input++;
    }

    *result = '\0';
    result = initial_pointer;
    return result;
}

int main(int argc, char **argv)
{
    char *input = "testInput";
    char *result = breakCamelCase(input);
    printf("Input: %s\n", input);
    printf("Output: %s\n", result);

    free(result);
}