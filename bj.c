#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int oyuncuKartlari[5], kasaKartlari[5];
    int oyuncuToplam = 0, kasaToplam = 0;
    for (int i = 0; i < 2; i++)
    {
        oyuncuKartlari[i] = (rand() % 11) + 1;
        oyuncuToplam += oyuncuKartlari[i];
    }
    printf("Ilk iki kartiniz: %d ve %d\n", oyuncuKartlari[0], oyuncuKartlari[1]);
    printf("Toplaminiz: %d\n", oyuncuToplam);
    for (int i = 0; i < 2; i++)
    {
        kasaKartlari[i] = (rand() % 11) + 1;
        kasaToplam += kasaKartlari[i];
    }
    printf("Kasanin gorunen karti: %d\n", kasaKartlari[0]);
    if (oyuncuToplam == 21)
    {
        printf("Blackjack yaptiniz! Kazandiniz!\n");
        return 0;
    }

    int oyuncuKartSayisi = 2, kasaKartSayisi = 2;
    int oyuncuBitirdiMi = 0;
    while (oyuncuBitirdiMi == 0)
    {
        printf("Kart cekmek ister misiniz? (Evet: 1, Hayir: 2): ");
        int secim;
        scanf("%d", &secim);

        if (secim == 1)
        {
            if (oyuncuKartSayisi >= 5)
            {
                printf("Kazandiniz! 5 Kart Cekme Kurali!\n");
                return 0;
            }
            oyuncuKartlari[oyuncuKartSayisi] = (rand() % 11) + 1;
            oyuncuToplam += oyuncuKartlari[oyuncuKartSayisi];
            printf("Cektiginiz kart: %d\n", oyuncuKartlari[oyuncuKartSayisi]);
            printf("Yeni toplam: %d\n", oyuncuToplam);
            oyuncuKartSayisi++;

            if (oyuncuToplam == 21)
            {
                printf("21 yaptiniz! Kazandiniz!\n");
                return 0;
            }
            else if (oyuncuToplam > 21)
            {
                printf("Toplaminiz %d oldu. Kaybettiniz.\n", oyuncuToplam);
                return 0;
            }
        }
        else if (secim == 2)
        {
            printf("Oyunu durdurdunuz. Toplaminiz: %d\n", oyuncuToplam);
            oyuncuBitirdiMi = 1;
        }
        else
        {
            printf("Gecersiz secim! Lutfen 1 veya 2 girin.\n");
        }
    }
    printf("\nKasanin sirasi basliyor...\n");
    printf("Kasanin kartlari: %d ve %d\n", kasaKartlari[0], kasaKartlari[1]);
    printf("Kasanin toplam puani: %d\n", kasaToplam);

    while (kasaToplam < 17)
    {
        printf("Kasa yeni bir kart cekiyor...\n");
        kasaKartlari[kasaKartSayisi] = (rand() % 11) + 1;
        kasaToplam += kasaKartlari[kasaKartSayisi];
        printf("Kasa yeni kart cekti: %d\n", kasaKartlari[kasaKartSayisi]);
        printf("Kasanin yeni toplam puani: %d\n", kasaToplam);
        kasaKartSayisi++;
    }

    if (kasaToplam > 21)
    {
        printf("Kasa %d puan ile batti. Kazandiniz!\n", kasaToplam);
        return 0;
    }

    printf("\nSonuc:\n");
    printf("Sizin toplam puaniniz: %d\n", oyuncuToplam);
    printf("Kasanin toplam puani: %d\n", kasaToplam);

    if (oyuncuToplam > kasaToplam)
    {
        printf("Kazandiniz!\n");
    }
    else if (oyuncuToplam < kasaToplam)
    {
        printf("Kaybettiniz.\n");
    }
    else
    {
        printf("Berabere!\n");
    }

    return 0;
    
}
