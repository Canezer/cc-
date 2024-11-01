#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAXDENEME 5
char *oo(int randomLine)

{

    int akildakiLine2;
    int akildakiLine;
    char degisken[30];
    int currentLine = 0;
    for (i = 0; i < strlen(isimler); i++)
    {
        if (isimler[i] == '/n')
        {

            currentLine++;
        }
        if (currentLine == randomLine)
        {
            akildakiLine = i;
        }
        if (currentLine - 1 == randomLine)
        {
            akildakiLine2 = i;
        }
        if (currentLine > randomLine)
        {
            break;
        }
    }
    strncpy(degisken, a)
}
int rastsayi(int n)
{

    int sayi = rand() % n;
    return sayi;
}
char *randomisim() 
{
    FILE *fptr;
    fptr = fopen("isim.cc.txt", "r");
    char isimler[50000];
    fgets(isimler, 50000, fptr);
    for (int i = 0; i < strlen(isimler); i++)
    {
        if (isimler[i] == '/n')
        {
            n++;
        }
    }
    int rastsayikelime = rastsayi(n);
}
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
    }
    printf("\n");
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