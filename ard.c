#include <stdio.h>
int main()
{
    int biggest = 1;
    int array[] = {
        12,
        23,
        34,
        45,
        56,
        67,
        188,
        89,
        909,
        99,
    };
    int x = 0;
    for (x = 0; x < 10; x++)
    {
        if (biggest < array[x])

        {
            biggest = array[x];
        }
    }
    printf("highest number is %d", biggest);
}