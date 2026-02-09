#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{

int l = 0;
int p = 1;
int f = 0;

    string q = get_string("Seu texto: ");

    for(int i = 0; i < strlen(q); i++)
    {
        if (isalpha(q[i]))
        {
            l++;
        }
        if (q[i] == ' ')
        {
            p++;
        }
        if (q[i] == '.'|| q[i] == '!' || q[i] == '?')
        {
            f++;
        }
    }
      float L = ((float)l / p) * 100;
      float S = ((float)f / p) * 100;

      float T = 0.0588 * L - 0.296 * S - 15.8;

      int R = round (T);

      if (R < 1)
      {
        printf("Before Grade 1\n");
      }
      else if (R >= 16)
      {
        printf("Grade 16+\n");
      }
      else
      {
        printf("Grade %i\n", R);
      }

    }
