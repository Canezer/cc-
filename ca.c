#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAXDENEME 6

void printt(char kelime[], bool bulunanlar[])
{
    for (int i = 0; i < strlen(kelime); i++)
    {
        if (bulunanlar[i] == 1)
        {
            printf("%c", kelime[i]);
        }
    }
}
bool kontrol(bool bulunanlar[])
{

    for (int i = 0; i < 5; i++)
    {
        if (bulunanlar[i] == 0)
        {
            return 0;
        }
        else
        {
        }
    }
    return 1;
}
int main()
{
    char harf;
    char kelime[] = "ahmet";
    bool bulunanlar[5];

    for (int i = 0; i < strlen(kelime); i++)

    {
        bulunanlar[i] = 0;
    }
    for (int deneme = 10; deneme > 0; deneme--)
    {

        printf("harfinizi giriniz: \n");
        scanf(" %c", &harf);

        for (int i = 0; i < strlen(kelime); i++)
        {
            char kopya = kelime[i];
            if (harf == kopya)
            {
                bulunanlar[i] = 1;
                printt(kelime, bulunanlar);
            }
            if (harf != kopya)
            {

                printf("_ ");
            }
        }

        if (kontrol(bulunanlar))
        {
            printf("tebrikler ");
            return;
        }
    }
}