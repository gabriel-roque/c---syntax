#include <stdio.h>
#include <stdlib.h>
/* soma usando metodo RECURSIVO
   funcao chamando funcaoa ate condicao de parada
*/

int main(){
  int valor = 0;
  int r = 0;

  printf("Digite um valor: ");
  scanf("%d",&valor);

  r = somaRecursao(valor);
  printf("RESULTADO FINAL: %d\n\n", r);
}


int somaRecursao(int valor){
  if(valor == 0){
    return 0;
  }

  int aux;
  printf("Digite um valor ou 0 para sair: ");
  scanf("%d",&aux);

  return valor + somaRecursao(aux);
}
