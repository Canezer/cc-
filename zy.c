
#include <stdbool.h>
#include <stdio.h>

bool isprime(int sayi)
{
    for (int i = 2; i < sayi; i++)
    {
    
       if (sayi % i == 0)
        {
            return 0;
        }
    
    }
     
 return 1;
}

int main()
{
    int sayi = 9;
    printf("%d", isprime(sayi));
}