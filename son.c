#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;

    int sayi, deneme = 0;
    int rastgele = rand() % 100;
    do
    {
        printf("Sayi giriniz : ");
        scanf("%d", &sayi);

        if (sayi > rastgele)
        {
            printf("cok yuksek.");
            deneme++;
        }
        else if (sayi < rastgele)
        {
            printf("cok dusuk.");
            deneme++;
        }
    } while (sayi != rastgele);
    printf("\nTebrikler %d. denemede bildiniz!!", deneme);
}
