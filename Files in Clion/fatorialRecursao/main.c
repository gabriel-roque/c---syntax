#include <stdio.h>


int fatorial (int valor){

    if (valor == 1){
        return 1;
    }

    return valor * fatorial(valor - 1);

}

int main(){

    int tot = fatorial(5);
    printf("%d", tot);


}