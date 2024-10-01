#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAXDENEME 5

void printt(char kelime[], bool bulunanlar[])
{
    for (int i = 0; i < strlen(kelime); i++)
    {
        if (bulunanlar[i] == 1)
        {
            printf("%c", kelime[i]);
        }
        else
        {
            printf("_");
        }
    } printf ("\n");
}
bool kontrol(bool bulunanlar[])
{

    for (int i = 0; i < 5; i++)
    {
        if (bulunanlar[i] == 0)
        {
            return 0;
        }
        
    }
    return 1;
}
int main()
{
    char harf;
    char kelime[] = "tahta";
    bool bulunanlar[5];

    for (int i = 0; i < strlen(kelime); i++)
    {
        bulunanlar[i] = 0;
    }
    for (int deneme = 0; deneme < MAXDENEME;)
    {
        bool bulundumu = 0;
        printf("harfinizi giriniz: \n");
        scanf(" %c", &harf);

        for (int i = 0; i < strlen(kelime); i++)
        {

            char kopya = kelime[i];
            if (harf == kopya)
            {
                bulunanlar[i] = 1;
                bulundumu = 1;
            }
        }
        printt(kelime, bulunanlar);
        if (bulundumu == 0)
        {
            deneme++;
        }
        if (kontrol(bulunanlar))
        {
            printf("tebrikler ");
            return;
        }
    }
}