#include <stdio.h>

int main()
{
int n;
scanf("%d", &n);

    int x = 1;
   
    for (; n > 1; n--)
    {

        x = n * x;
    }
    printf("%d\n", x);
    return 0;
}
