#include<stdio.h>



/*

    IMPLEMENTE O QUE FALTA:
    FUNCAO:
    estaVazia();
    estaCheia();
    push(int x);


*/


#define MAX 10

int inicio, fim;
int pilha[MAX];

void push(int x);
int pop();
int estaVazia(); //se vazia 0 - false
int estaCheia(); //se cheia 1 - true
int peek();


int main(){

    inicio=0;
    fim=0;

    push(2);
    push(35);
    push(60);

    printf("desempilhou o %d\n", pop());

    /*QUEM ESTA NO TOPO DA PILHA APOS O POP EXECUTADO NA LINHA 38?: 35

    */
    printf("o topo da pilha: %d", peek());//ESTA FALTANDO ALGO NESTA LINHA, PARA MOSTRAR O TOPO DA PILHA....


    return 1;
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
        printf("A PILHA ESTA CHEIA");
    }
}


int peek(){

    int topoDaPilha=pilha[fim-1];

    return topoDaPilha;

}

int pop(){
    int aux;
    if(!estaVazia()){
        aux = pilha[fim-1];
        fim--;

        return aux;
    }
    else{
        printf("\nPILHA EST� VAZIA...\n");
    }
}
