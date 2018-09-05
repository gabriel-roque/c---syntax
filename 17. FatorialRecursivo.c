#include <stdio.h>
#include <stdlib.h>

int main(){
  int valor;

  printf("Insira uma valor: ");
  scanf("%d", &valor);

  int total = fatorial(valor);
  printf("O valor de fatorial: %d \n", total );
}


int fatorial(int valor){
    if (valor == 1){
      return 1;
    }

    return valor * fatorial(valor - 1);
}
