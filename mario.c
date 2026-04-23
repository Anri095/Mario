#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do // Prompt user for a height between 1 and 8 inclusive
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    int i, j, k;

    for (i = 0; i < n; i++) // Outer loop to iterate through each row
    {

        for (j = 0; j < n - i - 1; j++) // Inner loop to print the required number of spaces
        {
            printf(" ");
        }

        for (k = 0; k < i + 1; k++) // Inner loop to print the required number of hashes
        {
            printf("#");
        }

        printf("\n"); // Move to the next line after completing a row
    }
}
