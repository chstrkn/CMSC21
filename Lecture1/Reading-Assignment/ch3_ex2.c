/* Prints int and float values in various formats. */

#include <stdio.h>

int main(void)
{
    // Declare variable i for integers.
    int i;
    // Declare variable x for floating point numbers.
    float x;

    // Assign an integer to i.
    i = 40;
    // Assign a floating point number to x.
    x = 829.21f;

    // Print the value of i in various formats.
    // %d uses the minimum amount of characters.
    // %5d uses at least five characters.
    // %5d uses at least five characters aligned to the left.
    // %5.3d uses at least five characters and three digits.
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

    // Print the value of x in various formats.
    // %10.3f uses at least ten characters with three digits after the decimal point.
    // %10.3e uses at least ten characters with three digits after the decimal point in exponential form.
    // %-10g uses at least ten characters aligned to the left in either fixed decimal form or exponenlial form.
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}
