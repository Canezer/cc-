#include <stdio.h>

int main() {
    int sayilar[] = {999999, 12345, 23455, 34569, 87904, 98863, 74441, 66666, 93337, 52222};
    int n = sizeof(sayilar) / sizeof(sayilar[0]);


    for (int i = 1; i < n; i++) {
        int key = sayilar[i];
        int j = i - 1;

      
        while (j >= 0 && sayilar[j] > key) {
            sayilar[j + 1] = sayilar[j];
            j = j - 1;
        }
        sayilar[j + 1] = key;
    }


    for (int i = 0; i < n; i++) {
        printf("%d ", sayilar[i]);
    }
    
    return 0;
}
