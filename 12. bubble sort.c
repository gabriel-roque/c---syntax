#include <stdio.h>

int main(){
  int num[5] = {5,1,4,8,2};
  int aux = 0;
  int i, j, o = 0;
  int n = 5; //parametro de qta de valores no array

  for (i = 0; i < n-1; i++){
    for(j = 0; j < n-i-1; j++){

      // verifica
      if (num[j] > num[j+1]){
        aux = num[j];
        num[j] = num[j+1];
        num[j+1] = aux;
      }

    } // fim L02

    // exibe a cada passada
    for(o = 0; o < 5; o++){
      printf("%d ", num[o]);
    }
    printf("\n"); // quebrar a linha

  } // fim L01

// Exibe resutaldo
  printf("\nResultado final\n");
  for(o = 0; o < 5; o++){
    printf("%d ", num[o]);
  }

}
