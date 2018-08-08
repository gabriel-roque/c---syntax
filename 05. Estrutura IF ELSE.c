//Ex 05: Estrutura IF and ELSE
// Gabriel Roque de Miranda Silva 3 Semestre
//Verifica se o numero do inserido e par ou impar
#include <stdio.h>

int main(){

   int num = 0;

   printf("Insira um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0){
      printf("Numero PAR");
    }
    else{
      printf("Numero IMPAR");
    }
}
