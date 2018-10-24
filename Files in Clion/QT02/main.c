#include<stdio.h>
#include<stdlib.h>



/*
    QUESTAO 2 - VIMOS EM SALA DE AULA QUE UMA LISTA ENCADEADA � UM TAD
    ONDE CADA ELEMENTO DA LISTA TEM UM PONTEIRO QUE "APONTA" PARA O PR�XIMO
    N� DA LISTA.

    O C�DIGO ABAIXO EST� INCOMPLETO.
    INSIRA OS 5 VALORES NA LISTA ENCADEADA:
    9
    8
    10
    12
    7
*/

int main(){



    typedef struct node{
        int valor;
        struct node *proximo;
    }Node;

    /*DEFINICAO DOS NODES*/
    Node node1, node2, node3, node4, node5;


    /* ATRIBUICAO DOS VALORES DOS NODES E
       E DO PONTEIRO PARA O PROXIMO NODE.
    */

    node1.valor = 9;
    node1.proximo = &node2;

    node2.valor = 8;
    node2.proximo = &node3;

    node3.valor = 10;
    node3.proximo = &node4;

    node4.valor = 12;
    node4.proximo = &node5;

    node5.valor = 7;
    node5.proximo = NULL;

    /*
       IMPRIMIR OS NODES DA LISTA ENCADEADA.
       NA ORDEM QUE FORAM INSERIDOS
    */

    Node *head;
    head = &node1;

    while(head != NULL){
        /*IMPRIME CADA NODE DA LISTA*/
        printf("%d => ", head->valor);
        head = head->proximo;
    };
    //REPRESENTA O FIM DA LISTA
    printf("NULL");

    return 1;
}
