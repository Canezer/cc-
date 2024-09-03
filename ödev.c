#include <stdio.h>

int main()
{
    int n, ters = 0, düz, normal;
    printf("sayı giriniz ");
    scanf("%d", &n);
    int orjinal = n;

    while (n != 0)
    {
        düz = n % 10;
        ters = ters * 10 + düz;
        n /= 10;
    }

    if (orjinal == ters)
        printf("%d palidrom.", orjinal);
    else
        printf("%d palidrom degil.", orjinal);

    return 0;
}