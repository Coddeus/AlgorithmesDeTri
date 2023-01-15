#include "general.h"

// int toBeSorted[] = {8, 7, 3, 1, 9, 4, 0, 2, 6, 4, 5};

int main(){
    int* toBeSorted = generateRandomList();

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