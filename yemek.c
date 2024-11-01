#include <stdio.h>
int main()
{
    int sayilar[] = {1, 9, 4, 3, 1, 6, 7, 2};

    for (int i = 0; i < 8; i++)
    {
        for (int n = 0; n < 7-i; n++)
        {
            if (sayilar[n] > sayilar[n + 1])
            {
                int x = sayilar[n];
                int y = sayilar[n + 1];
                sayilar[n + 1] = x;
                sayilar[n] = y;
                
            }
           
        }
    }
    for(int a = 0; a < 8; a++){
          printf("%d", sayilar[a]);
    }
}