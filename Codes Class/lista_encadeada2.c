#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int valor;
    struct node *proximo;
}Node;

void display(Node *head){

    Node *temp;

    temp=head->proximo;

    while(temp!=NULL){
        printf("%d->",temp->valor);
        temp=temp->proximo;
    }
    printf("NULL");
}

void insere(Node *head, int novo_valor){

    Node *aux, *novo_node;

    aux = head;

    //ALGUEM CONSEGUE EXPLICAR O QUE ISSO FAZ?
    while(aux->proximo!=NULL){
        aux=aux->proximo;
    }

    novo_node = malloc(sizeof(Node));

    novo_node->valor=novo_valor;
    novo_node->proximo=NULL;

    aux->proximo=novo_node;

}

int main(){

    Node head;
    head.proximo=NULL;

    insere(&head,50);


    //printf("%d=>",head.proximo->valor);


    insere(&head,300);
    //printf("%d=>",head.proximo->proximo->valor);

    insere(&head, 1000);

    display(&head);

/*     while(head != 0){
        printf("%i\n", head->valor);
        head = head->proximo;
    };*/

    return 0;
}

