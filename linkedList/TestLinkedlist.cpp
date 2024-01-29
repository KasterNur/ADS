// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prov;
};

void insertBfore(Node *thePointer, int value)
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = thePointer->prov;
    
}

void insertAfter(Node *thePointer, int value)
{
    if(thePointer==NULL)
    {
        cout<<"the pointer can't be NULL"<<endl;
        return;
    }
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = thePointer->next;
    thePointer->next = newNode;
}

void push(Node **theP, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = *(theP);
    *(theP) = newNode;
}

void printAll(Node *theP)
{
        if(theP==NULL)
    {
        cout<<" IT is NULL";
    }
    while(theP!=NULL)
    {
        cout<<theP->data<<"--->";
        theP = theP->next;
    }

}

int main() {


    Node *head =NULL;
    
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    Node *midle4 = new Node();
    midle4 = head;
    push(&head, 5);
    push(&head, 6);
    push(&head, 7);
    push(&head, 8);
    
    printAll(head);
    insertAfter(midle4,0);
    printAll(head);
    return 0;
}
