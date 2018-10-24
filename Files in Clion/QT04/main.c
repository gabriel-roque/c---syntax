#include<stdio.h>
#include<stdlib.h>


/*QUESTAO 4 - implemente o c�digo que efetua troca de posi��es no algoritmo de ordena��o
                e print a saida ap�s cada itera��o

*/

void selection_sort(int A[], int n){
    int i,j, aux;

    for(i=0; i<n;i++){
        int iMin=i;

        for(j=i+1;j<n;j++){

            if(A[j]<A[iMin]){
                iMin=j;
            }
        }

        aux = A[i]; // guardo a posicao do numero a ser trocado
        A[i]= A[iMin]; // Realoco o menor valor
        A[iMin] = aux; // Realoco o valor que foi trocado



        for(int i=0;i<n;i++){
            printf("%d ",A[i]);
        }
        printf("\n");

    }
}
int main(){
    int A[]={8,10,5,7,3,4,2,6};
    int n = sizeof(A) / sizeof(int);

    selection_sort(A, n);

    int i;
    for(i=0;i<n;i++){

        printf("%d ",A[i]);
    }


    return 1;
}
