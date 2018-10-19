#include <stdio.h>

#define MAX 10

int inicio, fim;
int pilha[MAX];

void push (int x);
int pop();
int estaVazia();
int estaCheia();
int peek();

int main(){

    inicio = 0;
    fim = 0;

    push(5);
    push(33);
    push(88);

    pop();

    int topo = peek();
    printf("Ultimo elemento da pilha: %d\n",topo);

    for (int i = 0; i < MAX ; ++i) {
        printf("%d - ", pilha[i]);
    }
}


int estaVazia(){

    return (inicio == fim);

}

int estaCheia(){

    return (fim == MAX);

}

void push(int x){

    if(!estaCheia()){
        pilha[fim++] = x;
    }else{
        printf("\nA PILHA ESTA CHEIA\n");
    }

}

int pop(){

    int del;

    if (!estaVazia()){
        pilha[fim-1] = 0;
        fim--;
        return del;
    }else{
        printf("\nA PILHA ESTA VAZIA\n");
    }

}

int peek(){

    int topo = pilha[fim-1];

    return topo;

}