#include <stdio.h>

int main()
{
    float tek = 0;
    float cift = 0;
    int array[] = {
        12,
        22,
        34,
        42,
        58,
        68,
        78,
        89,
        90,
        99,
    };
    int x = 0;
    for (x = 0; x < 10; x++)
    {
        if (array[x] % 2 == 0)
        {
            cift++;
        }
        if (array[x] % 2 != 0)
        {
            tek++;
        }
    } printf("%f\n",cift/tek);
}




