
#include <string.h>
#include <stdlib.h>


#define MAX 6

int intArray[MAX];
int inicio_da_fila = 0;
int fim_da_fila = -1;
int itemCount = 0;

int peek();
int isEmpty();
int isFull();
void insert(int data);//ENQUEUE
int removeData() ;//DEQUEUE










int peek() {
   return intArray[inicio_da_fila];
}

int isEmpty() {
   return itemCount == 0;
}

int isFull() {
   return itemCount == MAX;
}

int size() {
   return itemCount;
}

void insert(int data) {

   if(!isFull()) {

      if(fim_da_fila == MAX-1) {
         fim_da_fila = -1;
      }

      //printf("na funcao de  insere %d\n",fim_da_fila);
      intArray[++fim_da_fila] = data;
      itemCount++;
   }
}

int removeData() {
   int data = intArray[inicio_da_fila++];

   if(inicio_da_fila == MAX) {
      inicio_da_fila = 0;
   }

   itemCount--;
   return data;
}

int main() {
   /* inserir 5 elementos na fila */
   insert(3);
   insert(5);
   insert(9);
   insert(1);
   insert(12);

   // inicio da fila : 0
   // fim da fila  : 4
   // ------------------
   // indice : 0 1 2 3 4
   // ------------------
   // queue(fila) : 3 5 9 1 12
   insert(15);

   // inicio da fila : 0
   // fim da fila  : 5
   // ---------------------
   // indice : 0 1 2 3 4  5
   // ---------------------
   // queue(fila) : 3 5 9 1 12 15

   if(isFull()){
      printf("A Fila esta cheia!!\n");
   }

   // removendo um  item
   int num = removeData();

   printf("Elemento removido: %d\n",num);
   // inicio da fila : 1
   // fim da fila  : 5
   // -------------------
   // indice : 1 2 3 4  5
   // -------------------
   // queue(fila) : 5 9 1 12 15
    printf("Elemento removido: %d\n",removeData());
   // insere mais items
   insert(16);

   // inicio da fila : 1
   // fim da fila  : -1
   // ----------------------
   // indice : 0  1 2 3 4  5
   // ----------------------
   // queue(fila) : 16 5 9 1 12 15

   // Como a fila está cheia, novos itens não serao inseridos
   insert(17);
   insert(18);
   //O que falta no nosso programa

   // ----------------------
   // indice : 0  1 2 3 4  5
   // ----------------------
   // queue(fila) : 16 5 9 1 12 15
   printf("Elemento no inicio da fila: %d\n",peek());

   printf("----------------------\n");
   printf("index : 5 4 3 2  1  0\n");
   printf("----------------------\n");
   printf("Queue:  ");

   while(!isEmpty()) {
      int n = removeData();
      printf("%d ",n);
   }
}
