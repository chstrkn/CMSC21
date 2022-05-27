#include <stdio.h>
#include <math.h>

// Declare outer structure line
struct line
{
    // Declare inner structure point
    struct point
    {
        // Declare inner structure point variables
        float x;
        float y;
    } point1, point2;
    // Declare outer structure line variables
    float *midpoint;
    float slope;
    float distance;
    float intercept;
};

// Declare the functions
float solveSlope(struct line line1);
float *solveMidpoint(struct line line1);
float solveDistance(struct line line1);
float getSlopeInterceptForm(struct line line1);

int main(void)
{
    struct line line1;
    // Prompt the user to enter the coordinates of the first point
    printf("Enter x and y for point 1: ");
    scanf("%f%f", &line1.point1.x, &line1.point1.y);
    // Prompt the user to enter the coordinates of the second point
    printf("Enter x and y for point 2: ");
    scanf("%f%f", &line1.point2.x, &line1.point2.y);
    // Display the slope of the line
    printf("Slope: %f\n", solveSlope(line1));
    // Display the midpoint of the line
    printf("Midpoint: (%f, %f)\n", solveMidpoint(line1)[0], solveMidpoint(line1)[1]);
    // Display the distance between the two points of the line
    printf("Distance between two points: %f\n", solveDistance(line1));
    // Display the slope-intercept form of the line
    printf("Slope-intercept form: y = %fx + (%f)\n", solveSlope(line1), getSlopeInterceptForm(line1));
    // End the program
    return 0;
}

float solveSlope(struct line line1)
{
    // Solve for the slope of the line
    line1.slope = (line1.point2.y - line1.point1.y) / (line1.point2.x - line1.point1.x);
    return line1.slope;
}

float *solveMidpoint(struct line line1)
{
    // Solve for the midpoint of the line
    line1.midpoint[0] = (line1.point1.x + line1.point2.x) / 2;
    line1.midpoint[1] = (line1.point1.y + line1.point2.y) / 2;
    return line1.midpoint;
}

float solveDistance(struct line line1)
{
    // Solve for the distance between the two points of the line
    line1.distance = sqrt(pow(line1.point1.x - line1.point2.x, 2) + pow(line1.point1.y - line1.point2.y, 2));
    return line1.distance;
}

float getSlopeInterceptForm(struct line line1)
{
    // Solve for the slope-intercept form of the line
    line1.intercept = line1.point1.y - (solveSlope(line1) * line1.point1.x);
    return line1.intercept;
}
