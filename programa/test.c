#include <stdio.h>

int valor[10];
int contador, x, a, i, j, c = 0;
int temp;
int repetidos = 1;

int main(void)
{

    for (i = 1; i <= 10; i++)
    {
        printf("Digite o número:\n");
        scanf("%d", &valor[i]);

        if (valor[i] % 5 == 0)
        {
            contador++;
        }
    }

    for (i = 1; i < valor[i]; i++)
    {
        for (j = i + 1; j < valor[i]; j++)
        {
            if (valor[i] == valor[j + 1])
            {
                c++;
            }
        }
    }

    temp = valor[0]; // Primeiro valor não entra na varredura
    for (i = 1; i < valor[10]; i++)
    {
        if (valor[i] == temp)
        {
            repetidos++; // Enquanto tiverem valores iguais em sequencia, incrementa este contador
        }
        else
        {
            // Se deu valor diferente do anterior, verifica se teve repetições
            if (repetidos > 1)
            {
                printf("O valor %i esta repetido %i vezes\n", temp, repetidos);
                repetidos = 1;
            }
            // E atualiza este valor de comparação
            temp = valor[i];
        }
    }
    // Fim do loop, mas ainda não testamos se o último valor do vetor é repetido ou não, então...
    if (repetidos > 1)
    {
        printf("O valor %i esta repetido %i vezes\n", temp, repetidos);
    }

      printf("%d nao repetiu\n", c);
    printf("A quantidade de numeros divisiveis por 5 é: %d", contador);

  return 0;
}