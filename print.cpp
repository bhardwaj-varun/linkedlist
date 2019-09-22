#include "linklist.h"
#include <stdio.h>

void LinkList::print(){
    printf("Linked List : ");
    for(Node *p=head; p; p=p->next){
        printf("%d -> ", p->data);
    }
    printf("NULL\n");
}