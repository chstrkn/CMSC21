#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool teenager;
    int age;
    scanf("%d", &age);
    teenager = (age >= 13 && age <= 19) ? true : false;
    printf("%d\n", teenager);
    return 0;
}
