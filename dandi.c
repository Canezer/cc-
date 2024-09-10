#include <stdio.h>

int sum(int n)
{
    if (n <= 1)
        return n;

    if (n == 0)
        return 0;
    if (n % 2 == 0)

        return n + sum(n - 2);
    else
    {

        return n - 1 + sum(n-3);
    }
}

int main()
{
    printf("sayiyi giriniz");
    int n;
    scanf("%d", &n);
    int result = sum(n);
    printf("result = %d\n", result);
}