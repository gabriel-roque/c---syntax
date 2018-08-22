#include <stdio.h>
#include <stdlib.h>

// funcao troca

int troca(){


}


// funcao selectionSort
void selectionSort (int num[], int n){
  int i, j, o, x = 0;
  int menValor = 0;
  int aux = 0;

  for (i = 0; i < n; i++){ // 01
    menValor = i;
    for(j = i+1; j < n; j++){ // 02
      // verifica
      if (num[j] < num[menValor]){
        menValor = j;
      }
    }
      // realiza a troca
      troca(aux, num[i], num[menValor]);


      aux = num[i];
      num[i] = num[menValor];
      num[menValor] = aux;

      // EXIBIR
      for (x = 0; x < n; x++){
        printf("%d ", num[x]);
      }
      printf("\n");
      // EXIBIR
  }
} //fim funcao

// metodo principal
int main(){
  // array para ordenar
  int num[5] = {9, 1, 6, 10, 4};
  selectionSort(num,5);
}
