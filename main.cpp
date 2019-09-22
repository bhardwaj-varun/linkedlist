#include "linklist.h"
#include<bits/stdc++.h>
using namespace std;


int getInput(string s){
    int x;
    cout<<"Enter "<<s<<": ";
    scanf("%d",&x);
    return x;
}
int main(){
    LinkList l;
    
    do{
        printf("----------Linked List-----------\n");
        printf("1. Add at front\n");
        printf("2. Add at End\n");
        printf("3. Add after node\n");
        printf("Enter choice: ");
        int c;
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            l.addAtFront(getInput("val"));
            l.print();
            break;
        case 2:
            l.addAtEnd(getInput("val"));
            l.print();
            break;
        case 3:
            l.addAfterNode(getInput("pos"), getInput("val"));
            l.print();
            break;
        default:
            exit(0);
        }
        
    }while(1);

    return 0;
}
