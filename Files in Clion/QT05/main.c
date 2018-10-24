#include <stdio.h>

/*QUESTAO 4 - print a saida ap�s cada itera��o

*/



void insertionSort(int arr[], int n)
{
    int i, key, j;

    for (i = 1; i <n; i++)
    {
        key = arr[i];
        j = i;

        while (j > 0 && arr[j-1] > key)
        {
            arr[j] = arr[j-1];
            j= j-1;
        }

        arr[j] = key;

        // EXIBE A CADA INTERCAO

        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");

    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}




int main()
{
    int arr[] = {5,8,7,2,10};
    int n = sizeof(arr)/sizeof(int);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
