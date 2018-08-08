#include <stdio.h>
#include <conio.h>

int main(){
  // declaracao de variaveis
  int valor = 12;
  // declaracao do ponteiro
  int *ptr;
  ptr = &valor;

  printf("Conteudo da variavel %d\n", valor);
  printf("Endereco da variavel %x\n", &valor);

}
