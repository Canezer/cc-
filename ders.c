#include <stdio.h>
int main()
{
    for (int x = 1; x <= 1000; x++)
    {

        if (x % 3 == 0)
        {
            printf("vahap");
        }

        if (x % 5 == 0)
        {
            printf("can");
        }
        if (x % 3 != 0 && x % 5 != 0)
        {
            printf("%d\n", x);
        }
        else
        {
            printf("\n");
        }
    }
}