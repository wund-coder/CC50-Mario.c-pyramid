#include <stdio.h>

int main()
{
	int n; //Variável agregado ao "n".
	do
	{
      printf("Altura: "); //Altura solicitada e imprimida ao usuário, logo em seguida escaneada.
      scanf("%d", &n);
	}
	
		while (n<1 || n>8);//Limitador da altura enviada.
		
		for (int i = 0; i < n; i++) //Laço que repetirá as hashtags verticalmente conforme o número enviado demanda.
{
		for (int j = 0; j <= i; j++) //Laço que repetirá as hashtags horizontalmente conforme o número enviado demanda.
    {
    printf("#"); //Imprimirá na tela do usuário as hashtags.
    }
    printf("\n");
}
		    return 0;
}
		
	
