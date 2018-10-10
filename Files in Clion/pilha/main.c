#include <stdio.h>

#define MAX 10

int inicio, fim;
int pilha[MAX];

void push(int x);
int pop();
int estaVazia();
int estaCheia();
int peek();

int main() {

    inicio = 0;
    fim = 0;
    push(2);
    push(35);
    push(60);
    int valor = pop();
    printf("O todo da pilha e: %d", peek());

}



void push(int x){


}

int pop(){

}

int estaVazia(){

    if(inicio != MAX){
        return 1;
    } else {
        return 0;
    }

}

int estaCheia(){

    if(fim == MAX){
        return 1;
    } else {
        return 0;
    }

}
