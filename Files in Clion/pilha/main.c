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
    printf("Ultimo valor excluido: %d", valor);
    printf("\nO todo da pilha e: %d", peek());

}


int estaVazia(){

    return (inicio == fim);
}

int estaCheia(){

    return (fim == MAX);
}

int peek(){

    int topoDafila = pilha[fim-1];

    return topoDafila;

}

int pop(){
    int aux;
    if(!estaVazia()){
        aux = pilha[fim-1];
        fim--;

        return aux;
    }else{
        printf("\nA PILHA ESTA VAZIA\n");
    }
}

void push(int x){
    if(!estaCheia()){
        pilha[fim++] = x;
    }else{
        printf("\nA PILHA ESTA CHEIA!\n");
    }
}
