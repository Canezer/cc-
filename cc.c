#include <stdio.h>
int sum(int a, int b)
{

    return a + b;
}

int main()
{
    int a;
    int b;
    printf("Sayi giriniz : ");
    scanf("%d", &a);
    printf("Diger Sayiyi giriniz : ");
    scanf("%d", &b);
    int total = sum(a, b);
    printf("%d toplam", total);
}
