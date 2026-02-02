#include <cs50.h>
#include <stdio.h>

int main()
{
    int g = 0;
    int m;
    int n;
    do
    {
        printf("População Inicial: ");
        scanf("%d", &n);
        }while (n < 9);

    do
    {
        printf("Expansão da População: ");
        scanf("%d", &m);
        } while (m < n);

        do
        {
            n = n + (n / 3) - (n / 4);
            g++;
            }while (n < m);

            printf("Anos: %d\n", g);

            return 0;
}
