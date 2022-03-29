#include <stdio.h>

int main(void)
{
    // Declare the variables
    int ones, tens;
    // Prompt the user to enter a two-digit number
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &tens, &ones);
    // Evaluate the tens digit
    if (tens == 1)
    {
        // Give special treatment to numbers between 10 and 19
        if (ones == 0)
            printf("ten");
        else if (ones == 1)
            printf("eleven");
        else if (ones == 2)
            printf("twelve");
        else if (ones == 3)
            printf("thirteen");
        else if (ones == 4)
            printf("fourteen");
        else if (ones == 5)
            printf("fifteen");
        else if (ones == 6)
            printf("sixteen");
        else if (ones == 7)
            printf("seventeen");
        else if (ones == 8)
            printf("eigthteen");
        else if (ones == 9)
            printf("nineteen");
    }
    else if (tens == 2)
        printf("twenty");
    else if (tens == 3)
        printf("thirty");
    else if (tens == 4)
        printf("forty");
    else if (tens == 5)
        printf("fifty");
    else if (tens == 6)
        printf("sixty");
    else if (tens == 7)
        printf("seventy");
    else if (tens == 8)
        printf("eighty");
    else if (tens == 9)
        printf("ninety");
    // Evaluate the ones digit for numbers between 20 and 99
    if (tens != 1 && ones == 1)
        printf("-one");
    else if (tens != 1 && ones == 2)
        printf("-two");
    else if (tens != 1 && ones == 3)
        printf("-three");
    else if (tens != 1 && ones == 4)
        printf("-four");
    else if (tens != 1 && ones == 5)
        printf("-five");
    else if (tens != 1 && ones == 6)
        printf("-six");
    else if (tens != 1 && ones == 7)
        printf("-seven");
    else if (tens != 1 && ones == 8)
        printf("-eight");
    else if (tens != 1 && ones == 9)
        printf("-nine");
    return 0;
}
