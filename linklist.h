#include "node.h"

class LinkList{
    int length;
    Node* head;
    public:
    LinkList(){
        length=0;
        head=nullptr;
    }
    void addAtFront(int);
    void addAtPosition(int, int); //pos,val
    void addAtEnd(int);
    void print();
    
    
};