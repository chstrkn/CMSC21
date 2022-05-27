/* Checks planet names */

#include <stdio.h>
#include <string.h>

// Define the number of planets
#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    // Initialize the array of planets
    char *planets[] = {
        "Mercury",
        "Venus",
        "Earth",
        "Mars",
        "Jupiter",
        "Saturn",
        "Uranus",
        "Neptune",
        "Pluto",
    };

    // Declare the variables
    int i, j;

    // Iterate over the number of arguments
    for (i = 1; i < argc; i++)
    {
        // Iterate over the number of planets
        for (j = 0; j < NUM_PLANETS; j++)
        {
            // Check if the argument is a planet
            if (strcmp(argv[i], planets[j]) == 0)
            {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }
        // Display argument is not a planet if j == NUM_PLANETS
        if (j == NUM_PLANETS)
        {
            printf("%s is not a planet\n", argv[i]);
        }
    }

    // End the program
    return 0;
}
