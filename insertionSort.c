#include "general.h"


int main(){
    int* toBeSorted = generateRandomList();

    printList(toBeSorted, listLen);

    for (int i=1;i<listLen;i++){
        int savedEl = toBeSorted[i];
        int el=i;
        while (savedEl<toBeSorted[el-1]){
            toBeSorted[el] = toBeSorted[el-1];
            el--;
            if (el==0)
                break;
        }
        toBeSorted[el] = savedEl;
    }

    /*
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
    */

    printList(toBeSorted, listLen);

    free(toBeSorted);
    return 0;
}