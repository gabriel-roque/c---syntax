#include <stdio.h>
#include <stdlib.h>

int main() {

    int valor;

    printf("Insira um valor: ");
    scanf("%d", &valor);

    int *ptr = &valor;
    printf("%d", &ptr);

}