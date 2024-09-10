#include <stdio.h>
int strlen(char *sentence)
{
    int a = 0;
    for (a = 0; 1; a++)
    {
        char t = sentence[a];
        if (t == '\0')

        {
            return a++;
        }
    }
}
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