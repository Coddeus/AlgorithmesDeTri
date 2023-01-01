#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// int toBeSorted[] = {8, 7, 3, 1, 9, 4, 0, 2, 6, 4, 5};

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

int main(){
    int listLen, max, min;
    printf("list length = ");
    scanf("%d", &listLen);
    printf("\nlist max = ");
    scanf("%d", &max);
    printf("\nlist min = ");
    scanf("%d", &min);
    printf("\n");
    int* toBeSorted = generateRandomList(listLen, max, min);

    printList(toBeSorted, listLen);
    for (int i=1;i<listLen;i++){
        int el=i;
        while (toBeSorted[el]<toBeSorted[el-1]){
            int savedEl = toBeSorted[el];
            toBeSorted[el] = toBeSorted[el-1];
            toBeSorted[el-1] = savedEl;
            el--;
            if (el==0)
                break;
        }
    }
    printList(toBeSorted, listLen);

    free(toBeSorted);
    return 0;
}