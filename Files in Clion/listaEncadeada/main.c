#include <stdio.h>


typedef struct node{
    int valor;
    struct node *proximo;
}Node;

int main() {

    Node node1, node2, node3;

    node1.proximo = 10;
    node1.proximo = &node2;






}