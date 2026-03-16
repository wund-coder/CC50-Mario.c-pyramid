#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{

    if (argc != 2)
     {
printf("Uso: ./substitution chave de substituição.\n");
return 1;
     }
     if (strlen(argv[1]) != 26)
     {
        printf("A chave deve conter 26 caracteres.\n");
        return 1;
     }

     string t = get_string("plaintext: ");
     printf("ciphertext: ");

     for(int i = 0; i < strlen(t); i++)
     {
     if (isalpha(t[1]))
     {
        if(isupper(t[1]))
        {
            int n = t[i] - 'A';
            printf("%c", toupper(argv[1][n]));
        }
        else
        {
         int n = t[i] - 'a';
         printf("%c", tolower(argv[1][n]));
        }
      }
     else
       {
        printf("%c", t[i]);
     }
   }
printf("\n");
return 0;
}
