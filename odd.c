#include <stdio.h>

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}

int powerLoop(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int base, exponent;
    printf("Taban sayisini girin: ");
    scanf("%d", &base);
    printf("Ust degerini girin: ");
    scanf("%d", &exponent);

    int resultRecursive = power(base, exponent);

    printf(" sonuc: %d^%d = %d\n", base, exponent, resultRecursive);

    return 0;
}