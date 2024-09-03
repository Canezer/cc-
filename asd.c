#include <stdio.h>

int main()
{
    int toplam = 0;
    int array[] = {
        4726,
        23,
        34,
        45,
        56,
        5467,
        78,
        89,
        90,
        99,
    };
    int x = 0;
    for (x = 0; x < 10; x++)
    {
        toplam  = toplam + array[x];
    }
    printf("%d", toplam);
}
