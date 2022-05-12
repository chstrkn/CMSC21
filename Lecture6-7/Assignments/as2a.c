#include <stdio.h>

#define SIZE 8

int main(void)
{
    // Initialize the arrays
    int road_networks[SIZE][SIZE] = {
        {1, 1, 0, 0, 0, 1, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 1, 0, 0},
        {1, 0, 0, 1, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 1, 0, 1},
    };
    char points[SIZE] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    // Display the points as column titles
    for (int i = 0; i < SIZE; i++)
    {
        if (i == 0)
        {
            printf("\t");
        }
        if (i == 2 || i == 3)
        {
            printf("[%c]\t", points[i]);
        }
        else
        {
            printf("%c\t", points[i]);
        }
    }
    // Print a newline to go to the next row
    printf("\n");
    // Display the rows and values of the 2D array
    for (int i = 0; i < SIZE; i++)
    {
        // Display the points as row titles
        if (i == 2 || i == 3)
        {
            printf("[%c]\t", points[i]);
        }
        else
        {
            printf("%c\t", points[i]);
        }
        // Display the values of the 2D array
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d\t", road_networks[i][j]);
        }
        // Print a newline to move to the next row
        printf("\n");
    }
    // Prompt the user to enter the point and display the corresponding letter
    int point;
    printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
    scanf("%d", &point);
    printf("At point: %c\n", points[point]);
    // Locate the nearest charging point
    for (int i = 0; point != 2 && point != 3; i++)
    {
        // Determine whether the adjacent point is accessible
        if (road_networks[point][i])
        {
            // Set the current point to the nearest accessible adjacent point
            point = i;
            printf("Now at point: %c\n", points[point]);
        }
    }
    // Display a message if the user arrives at a charging point
    printf("Point: %c arrived to charging station\n", points[point]);
    return 0;
}
