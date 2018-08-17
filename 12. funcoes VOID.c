#include <stdio.h>
#include <stdlib.h>

// estrutura basica funcao VOID
// tipo_nome_(parametros tipo_nome, tipo_nome)
void soma(int a, int b){
  int r = 0;
  r = a+b;
  printf("%d",r);
}

// funcao principal
int main(){
  soma(10,3);
}
