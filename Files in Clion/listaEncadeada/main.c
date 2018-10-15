#include <stdio.h>


typedef struct node{
    int valor;
    struct node *proximo;
}Node;

int main() {

    Node node1, node2, node3;

    node1.valor = 10;
    node1.proximo = &node2;

    node2.valor = 20;
    node2.proximo = &node3;

    node3.valor = 30;
    node3.proximo = NULL;

    Node *head;
    head = &node1;

    while (head != NULL){
        printf("%d=>", head->valor);
        head = head->proximo;
    }

    return 1;

}