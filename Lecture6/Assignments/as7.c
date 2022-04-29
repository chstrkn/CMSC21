#include <stdio.h>

int main(void)
{
    int b[15] = {[4] = 48, [9] = 7, [2] = 29};

    for (int i = 0; i < 15; i++)
    {
        printf("b[%d] = %d\n", i, b[i]);
    }

    return 0;
}
