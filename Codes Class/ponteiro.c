#include<stdlib.h>
#include<stdio.h>


void soma2_porvalor(int a, int b){
    a +=2;//a=a+2;
    b += 2;
}


void soma2_porponteiro(int *a, int *b){
    *a+=2;
    *b+=2;
}

void imprime_continue(){
    int i;
    printf("digite 0 para continuar: ");
    scanf("%i", &i);

}

int main(){
    int *ptr_a;
    int *ptr_b;

    printf("VALOR DO ENDERECO DE a=%d , b=%d\n",ptr_a, ptr_b);

    imprime_continue();

    int valor_a=10;
    int valor_b=2;

    ptr_a = &valor_a;
    ptr_b= &valor_b;

    printf(" VALOR DAS VARIAVEIS a=%d , b=%d\n",*ptr_a, *ptr_b);

    imprime_continue();
    soma2_porvalor(*ptr_a, *ptr_b);

    printf("VALOR DAS VARIAVEIS a=%d , b=%d\n",*ptr_a, *ptr_b);

    imprime_continue();
    soma2_porponteiro(ptr_a, ptr_b);

    printf(" VALOR DAS VARIAVEIS a=%d , b=%d\n",*ptr_a, *ptr_b);

    return 1;
}


