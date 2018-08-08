//Ex 07: Pares e Impares
// Gabriel Roque de Miranda Silva 3 Semestre
//Exibe o total de numeros pares e impares do indice de 0 a 10
#include <stdio.h>

int main(){
  int i = 0;
  int tot_par = 0;
  int tot_impar = 0;

  printf("\n=== NUMERO EVIDENTES ===\n");
  for (i = 0; i <= 10; i++){
    printf("%d ", i); //exibe os numeros
  }
  printf("\n=======================\n");

  printf("\n=== NUMEROS PARES ===\n");
  for (i = 0; i <= 10; i++){
    if (i % 2 == 0){ //verificao de pares
      printf("%d ",i);
      tot_par++;
    }
  }

  printf("\n=== NUMEROS IMPARES ===\n");
  for (i = 0; i <= 10; i++){
    if (i % 2 == 1){ //verificao de impares
      printf("%d ",i);
      tot_impar++;
    }
  }

  printf("\n====== RESULTADO ======\n");
  printf("\nTotal de pares foram: %d\n",tot_par);
  printf("Total de impares foram: %d",tot_impar);
}
