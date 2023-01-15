#include "general.h"


int * generateRandomList(size_t n, int max, int min){
    int* arr = malloc(n * sizeof(int));
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand()%(max+1-min)+min;
    }
    
    return arr;
}

void printList(int list[], size_t lenlist){
    printf("[");
    for (int i=0;i<lenlist-1;i++)
        printf("%d, ", list[i]);
    printf("%d", list[lenlist-1]);
    printf("]\n");
}