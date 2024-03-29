#include "linklist.h"

void LinkList::addAtFront(int x){
    Node *p = new Node();
    p->data = x;
    p->next = head;
    head = p;
}
void LinkList::addAtEnd(int x){
    Node *p;
    if(!head){
        return addAtFront(x);
    }
    for(p=head;p->next;p=p->next);
    Node *ptr = new Node();
    ptr->data=x;
    ptr->next=nullptr;
    p->next = ptr;
}
void LinkList::addAfterNode(int pos, int x){
    Node *p;
    if(!head){
        return addAtFront(x);
    }
    for(p=head;p->next && p->data != pos ;p=p->next);
    
    if(!p->next){ return addAtEnd(x);}

    Node *ptr = new Node();
    ptr->data=x;
    ptr->next = p->next;
    p->next=ptr;
}