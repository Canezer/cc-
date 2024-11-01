#include <stdio.h>

int main() {
    int sayilar[] = {999999, 12345, 23455, 34569, 87904, 98863, 74441, 66666, 93337, 52222};
    int n = sizeof(sayilar) / sizeof(sayilar[0]);

    
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (sayilar[j] < sayilar[minIndex]) { 
                minIndex = j; 
            }
        }
        
        int temp = sayilar[i];
        sayilar[i] = sayilar[minIndex];
        sayilar[minIndex] = temp;
    }

    
    for (int i = 0; i < n; i++) {
        printf("%d ", sayilar[i]);
    }
    return 0;
}
