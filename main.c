#include <stdio.h>
#include "head.h"

int main(void){

    List head;
    head.First = nil;
    head.Last = nil;

    addAkhirNode(&head, 1);
    addAkhirNode(&head, 2);
    addAkhirNode(&head, 3);
    addAwalNode(&head, 0);
    printList(head);
    printf("\n");
    printListReverse(head);
    return 0;
}