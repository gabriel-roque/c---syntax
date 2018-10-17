#include <stdio.h>


int soma(int valor){

    if(valor == 0){
        return 0;
    }

    int aux;

    printf("Insira um valor ou 0 para SAIR: ");
    scanf("%d", &aux);


   return valor + soma(aux);


}



int main() {

    int var;

    printf("Insira um valor: ");
    scanf("%d", &var);

    int r = soma(var);
    printf("%d", r);

}
