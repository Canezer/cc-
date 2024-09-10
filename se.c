#include <stdio.h>
#include <stdlib.h>
void reverse(char *sentence)
{
    int uz = strlen(sentence);

    int i = 0;
    for (i = 0; i < uz / 2; i++)
    {
        char x = sentence[i];
        int y = uz - i - 1;
        char z = sentence[y];

        sentence[i] = z;
        sentence[y] = x;
    }
}
int main()
{
    char sentence[30];
    printf("cumlenizi yaziniz: \n");
    scanf("%s", sentence);
    reverse(sentence);
    printf("tersi\n%s \n", sentence);
}