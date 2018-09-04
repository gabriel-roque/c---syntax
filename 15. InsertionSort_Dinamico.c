#include "stdio.h"
#include <stdlib.h>

void insertionSort(int num[], int n[]){
  int i, o, j;
  int valor, indice;

  for (i = 1; i < n; i++){
    valor = num[i];
    indice = i;

    while(indice > 0 && num[indice-1] > valor){
      num[indice] = num[indice-1];
      indice--;
    }
    num[indice] = valor;


// exificao durante as interacoes
    for(j = 0; j < n; j++){
      printf("%d ", num[j]);
    }
    printf("\n");
  }

// exibicao final
  for(o = 0; o < n; o++){
    printf("%d ", num[o]);
  }

}

//metodo principal
int main(){
  int num[] = {15, 7, 1, 8, 6};
  int n = sizeof(num) / sizeof(int); // 20 / 4 = 5
  /* para cada int e 4 bytes
  */
  insertionSort(num, 5);

}
