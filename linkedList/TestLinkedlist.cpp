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
    Node * tem = new Node();
    tem = thePointer;
    thePointer->next = newNode;
    newNode->next=tem;
     
    
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
    newNode->next = *theP;
    cout<<"theP="<<theP<<" *theP"<<*theP<<endl;
    newNode->prov = newNode;
    *(theP) = newNode;
}

void push1(Node *theP, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    // newNode->next = theP;
    theP->next=newNode;
   // newNode->prov = newNode;
    //theP = newNode;
    cout<<"data ="<<theP->next<<endl;
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
    
    cout<<endl;
  
}

void del(Node *theP)
{
    Node * tem = new Node();
    Node * next = new Node();
   tem = theP;   // back up 
   tem->data = theP->data;
   
   next = theP->next;
  
   cout<<"current data="<<theP->data<<" next data="<<next->data<<endl;
    tem->next = theP->next;

    delete(tem);
    cout<<theP->data<<endl;
  
    theP->next = next->next;
    theP->data = next->data;
    cout<<theP->data<<endl;
    
}
int main() {


    Node *head =NULL;
      
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    Node *midle4 = new Node();
    midle4 = head;
    // push1(head, 5);
    // push1(head, 6);
    // push1(head, 7);
    // push1(head, 8);
    
    printAll(head);
    
   insertAfter(midle4,88);
    printAll(head);
   // insertBfore(midle4,99);
    //printAll(head);
    del(midle4);
    printAll(head);
    return 0;
}
