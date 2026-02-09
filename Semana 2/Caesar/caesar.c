#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Uso: ./caesar chave\n");
        return 1;
    }
    for(int i = 0; i < strlen(argv[1]); i++)

    if(isalpha(argv[1][i]))
    {
        printf("Uso: ./caesar chave\n");
        return 1;
    }

    int g = atoi(argv[1]);

    string q = get_string("Criptografar: ");
    printf("ciphertext: ");

    for(int t = 0; t < strlen(q); t++)
    {
        if (isupper(q[t]))
        {
            char c = (q[t] - 'A' + g) % 26 + 'A';
            printf("%c", c);
        }
        else if (islower(q[t]))
        {
            char c = (q[t] - 'a' + g) % 26 + 'a';
            printf("%c", c);
        }
        else
        {
            printf("%c", q[t]);
        }
    }
    printf("\n");
    return 0;
}
