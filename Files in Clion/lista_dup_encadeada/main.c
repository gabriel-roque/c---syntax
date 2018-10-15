/*Lista Duplamente encadeada*/
#include<stdio.h>
#include<stdlib.h>

//Declarando a estrura do n�
typedef struct Node  {
    int valor;
    struct Node* prox;
    struct Node* ant;
}node;//node � um alias(codinome, apelido)

// variavel GLOBAL
// ponteiro para o head (topo).
struct Node* head;











//Cria um node e retorna um ponteiro desse novo n�
struct Node* GetNewNode(int x) {
    node* newNode= (node*)malloc(sizeof(node));
    newNode->valor = x;
    newNode->ant = NULL;
    newNode->prox = NULL;
    return newNode;
}







//Insere um n� no inicio
void Insere_Inicio(int x) {
    node* newNode = GetNewNode(x);
    if(head == NULL) {
        head = newNode;
        return;
    }
    head->ant = newNode;
    newNode->prox = head;
    head = newNode;
}







//Insere um n� no fim da lista
void Insere_Fim(int x) {
    node* temp = head;
    node* newNode = GetNewNode(x);
    if(head == NULL) {
        head = newNode;
        return;
    }
    // vai para o ultimo n�
    while(temp->prox != NULL) {
        temp = temp->prox;
    }
    temp->prox = newNode;
    newNode->ant = temp;
}





//imprime todos os elementos da lista a partir do inicio
void Print_Inicio() {
    node* temp = head;
    printf("A partir do inicio: \n");
    while(temp != NULL) {
        printf("%d ",temp->valor);
        temp = temp->prox;
    }
    printf("\n");
}


//imprime os n�s de tr�s para frente
void Print_Fim() {
    node* temp = head;
    if(temp == NULL){
        return; // O que significa isso?
    }
    // indo para o final
    while(temp->prox != NULL) {
        temp = temp->prox;
    }

    printf("A partir do fim: \n");
    while(temp != NULL) {
        printf("%d ",temp->valor);
        temp = temp->ant;
    }
    printf("\n");
}




int main() {

    // iniciando a lista.
    // seta o  head como  NULL.
    head = NULL;


    Insere_Fim(2);
    Print_Inicio();
    Print_Fim();

    Insere_Fim(4);
    Print_Inicio();
    Print_Fim();

    Insere_Inicio(6);
    Print_Inicio();
    Print_Fim();

    Insere_Fim(8);
    Print_Inicio();
    Print_Fim();

    /*Criar Menu para inserir no inicio
        inserir no fim
        imprimir lista do inicio
        imprimir lista do fim
    */

    return 0;

}
