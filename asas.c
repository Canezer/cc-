#include <stdio.h>
#include <string.h>

void encrypt(char text[], int shift)
{
    int i;
    for (i = 0; i < strlen(text); i++)
    {
        text[i] = (text[i] + shift - 32) % 95 + 32;
    }
    printf("Encrypted text: %s\n", text);
}

void decrypt(char text[], int shift)
{
    int i;
    for (i = 0; i < strlen(text); i++)
    {
        text[i] = (text[i] - shift - 32 + 95) % 95 + 32;
    }
    printf("Decrypted text: %s\n", text);
}

int main()
{
    char text[100];
    int shift = 3; 

    printf("Bir cumle girin: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = 0;

    encrypt(text, shift);

    decrypt(text, shift);

return 0;
}