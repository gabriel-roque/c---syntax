//Ex 06: Estrutura WHILE
// Gabriel Roque de Miranda Silva 3 Semestre
//Percorre o indice de 0 a 10
#include <stdio.h>

int main(){

  int i = 0;

  printf("====================\n");
  printf("Numero Vertical\n");
  printf("====================\n");

  while (i <= 10) {
    printf("%d\n", i );
    i++;
  }

  printf("====================\n");
  printf("Numero Horizontal\n");
  printf("====================\n");

  while (i <= 10) {
    printf("%d ", i);

  }
}
