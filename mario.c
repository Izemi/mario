#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask the user what the height of the pyramid is
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    for (int i = 0; i < n; i++)
    {
        // Add spaces before the hashes
        for (int j = 1; j < n - i; j++)
        {
            printf(" ");
        }
        // Print hashes according to the row number
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }
        // Put hashes on different lines
        printf("\n");
    }
}
