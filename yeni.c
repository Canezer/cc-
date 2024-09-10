#include <stdio.h>
#include <stdlib.h>
int main()
{
    char sentence[30];
    printf("cumlenizi yaziniz: \n");
    scanf("%s", sentence);

    int uz = strlen(sentence);

    int i = 0;
    for (i = 0; i < uz / 2; i++)
    {
        char x = sentence[i];
        int y = uz - i - 1;
        char z = sentence[y];
        if (x != z)
        {

            printf("palindrom degil");
            return 0;
        }
    }
    printf("palindrom ");
}