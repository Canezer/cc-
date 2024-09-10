#include <stdio.h>

int fibo(int n)
{
    if (n <= 1)
        return n;

    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    printf("sayiyi giriniz");
    int n;
    scanf("%d", &n);
    int result = fibo(n);
    printf("result = %d\n", result);
}