//Ex 04: Estrutura FOR
// Gabriel Roque de Miranda Silva 3 Semestre
//Percorre o indice de 0 a 10
#include <stdio.h>

int main(){

	int i = 0;
	printf("====================\n");
  printf("Numero Vertical\n");
  printf("====================\n");
    for (i = 0; i <= 10; i++){
      printf("%d\n", i ); //com quebra de linha
  }

  printf("====================\n");
  printf("Numero Horizontal\n");
  printf("====================\n");
    for (i = 0; i <= 10; i++){
      printf("%d ", i ); //sem quebra de linha
  }
}
