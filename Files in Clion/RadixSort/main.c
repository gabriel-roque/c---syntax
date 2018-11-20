#include <stdio.h>

// Função para encontrar o Maior elemento
int verificarMaior(int elementos[], int tamanho)
{
    int maior = elementos[0], i;
    for(i = 1; i < tamanho; i++)
    {
        if(maior < elementos[i])
            maior = elementos[i];
    }
    return maior;
}

// Função para executar a classificação
void RadixSort(int elementos[], int tamanho)
{
    /*
     * o Balde é vai cria uma matriz com 10 posições para guardar cada valor da coluna
     * Por que eu preciso de um matriz LINHA, COLUNA
     */
    int balde[10][10], balde_contador[10];
    int i, j, k, restante, COLUNA=0, divisor=1, maior, avancar;

    maior = verificarMaior(elementos, tamanho);
    printf("O maior elemento %d\n",maior);
    while(maior > 0)
    {
        // 36|7| coluna 1   3|6|7 coluna 2
        /*Navegar entre os algorismos | M | C | D |*/
        COLUNA++;
        maior/=10;
    }

    for(avancar = 0; avancar < COLUNA; avancar++) // executa para cada valor  (COLUNA REFERENTE AO VALOR)
    {
        // Define 0 para todos balde
        /*No caso do C ele acopla valores aleatorios da memoria, se faz necessario atribuir com 0*/
        for(i = 0; i < 10; i++)
        {
            balde_contador[i] = 0; // como se fosse um AUX
        }


        for(i = 0; i < tamanho; i++) //FAZ A LOGICA DAS CARTAS (Organiza os itens no seus baldes)
        {
            // exemplo 12 divido por 1 igual a 12 o resto de 10 é 2  então é colocado no restante
            restante = (elementos[i] / divisor) % 10;

            //criar um vetor dentro do indice balde (primeira iteracao)
                 // 2         0               2              1
            balde[restante][balde_contador[restante]] = elementos[i];
            balde_contador[restante] += 1;
        }

        i = 0;

        // Pega o valor que está dentro do vetor que está dentro do indice balde e coloca no vetor principal elemento
        for(k = 0; k < 10; k++)
        {
            for(j = 0; j < balde_contador[k]; j++)
            {
                elementos[i] = balde[k][j]; // so organiza os itens na posicao de fato final ORDENADA
                i++;
            }
        }
        divisor *= 10;

        for(i = 0; i < tamanho; i++)
            printf("%d  ",elementos[i]);
        printf("\n");
    }
}

//programa começa aqui
int main()
{
    int i, tamanho, elementos[10];
    printf("Digite o número de elementos:: ");
    scanf("%d",&tamanho);

    printf("Digite os elementos Ex: 10, 23 [..]  :: ");
    for(i = 0; i < tamanho; i++)
    {
        scanf("%d",&elementos[i]);
    }
    RadixSort(elementos,tamanho);

    printf("Os elementos classificados são::  ");
    for(i = 0; i < tamanho; i++)
        printf("%d  ",elementos[i]);
    printf("\n");
    return 0;
}