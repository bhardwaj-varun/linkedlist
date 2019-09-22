#include "linklist.h"

void LinkList::addAtFront(int x){
    Node *p = new Node();
    p->data = x;
    p->next = head;
    head = p;
}