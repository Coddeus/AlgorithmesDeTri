#include "general.h"

int listLen;
int * generateRandomList(){
    int max, min;
    printf("list length = ");
    scanf("%d", &listLen);
    printf("\nlist max = ");
    scanf("%d", &max);
    printf("\nlist min = ");
    scanf("%d", &min);
    printf("\n");

    int* arr = malloc(listLen * sizeof(int));
    srand(time(NULL));

    for (int i = 0; i < listLen; i++)
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