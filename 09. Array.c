//Conjunto de variavis do mesmo tipo
//posicao do conteudo diferente do indice

// quando espesicificamos int array[4] estamos dizendo que nos queremos um vetor de 4 posicoes, logo ele tera o indice de 0 a 3
#include <stdio.h>

int main() {

int nome [6];
int i = 0;


for (i = 0; i < 6; i++){
  printf("Valor: ");
  scanf("%d", &nome[i]);

}

printf("\n=====================\n");

for (i = 1; i < 7; i++){
  printf("A posicao do vetor %d e %d\n", i, nome[i]);
}














}
