#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOYUT 10

void tahtayı_goster(char tahta[BOYUT][BOYUT]) {
    printf("   ");
    for (int i = 0; i < BOYUT; i++) {
        printf("%2d ", i);
    }
    printf("\n");
    
    for (int i = 0; i < BOYUT; i++) {
        printf("%2d ", i);
        for (int j = 0; j < BOYUT; j++) {
            printf("%c  ", tahta[i][j]);
        }
        printf("\n");
    }
}

void gemi_yerlestir(char tahta[BOYUT][BOYUT]) {
    int x, y;
    for (int i = 0; i < 5; i++) { // 5 gemi yerleştiriyoruz
        do {
            x = rand() % BOYUT;
            y = rand() % BOYUT;
        } while (tahta[x][y] == 'G'); // Aynı yere gemi yerleştirmemek için
        tahta[x][y] = 'G'; // Gemi yerleştir
    }
}

int atis_yap(char tahta[BOYUT][BOYUT], int x, int y) {
    if (tahta[x][y] == 'G') {
        tahta[x][y] = 'X'; // Gemiyi vur
        return 1; // Vuruş
    } else {
        tahta[x][y] = 'O'; // Atış boş
        return 0; // Iskala
    }
}

int main() {
    char tahta[BOYUT][BOYUT];
    char tahmin[BOYUT][BOYUT];

    // Tahtaları başlat
    for (int i = 0; i < BOYUT; i++) {
        for (int j = 0; j < BOYUT; j++) {
            tahta[i][j] = ' ';
            tahmin[i][j] = ' ';
        }
    }

    srand(time(NULL)); // Rastgele sayılar için
    gemi_yerlestir(tahta);

    int can = 5; // Her oyuncunun 5 canı var
    while (can > 0) {
        tahtayı_goster(tahmin);
        int x, y;
        printf("Atış yapmak için koordinatları girin (x y): ");
        scanf("%d %d", &x, &y);

        if (x < 0 || x >= BOYUT || y < 0 || y >= BOYUT) {
            printf("Geçersiz koordinatlar. Lütfen tekrar deneyin.\n");
            continue;
        }

        if (tahmin[x][y] != ' ') {
            printf("Bu koordinatı daha önce kullandınız.\n");
            continue;
        }

        if (atis_yap(tahta, x, y)) {
            printf("Vurdunuz!\n");
        } else {
            printf("Iskala!\n");
            can--;
        }

        if (can == 0) {
            printf("Tüm canlarınız gitti. Oyun bitti!\n");
            break;
        }
    }

    printf("Gerçek tahta:\n");
    tahtayı_goster(tahta);

    return 0;
}
