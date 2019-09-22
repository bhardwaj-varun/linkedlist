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
    void addAfterNode(int, int); //data,val
    void addAtEnd(int);
    void print();
    
    
};