#include <stdio.h>


// funcao para receber array
//             declarar tipo -> array -> [] --> tipo --> qta array
int funcaoArray(int vetor[], int n){
  printf("%d", vetor[2]);

}

int main(){
  int vetor[5] = {45, 6, 9, 8, 1};
  funcaoArray(vetor, 5);
}
