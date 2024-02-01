#include <iostream>

using namespace std;


struct node{
    int data;
    struct node* next;

    node(){
        this->data = 0;
        this->next = NULL;
    }
    node(int data){
        this->data = data;
        this->next = NULL;
    }
    node(int data, node* next){
        this->data = data;
        this->next = next;
    }
};
struct Linked_list{
    node* head;

    
    Linked_list()
    {
        head = new node();
    }
    int front(){
        return head->data;
    }
    
    void push_front(int x){
        if (head == NULL){
            head = new node(x);
            return;
        }
        node* v = new node(x,head);
        head =v;
    }
    void pop_front(){
        if(head ==NULL){
            cerr<<"Error: List is empty\n";
            exit(0);
        }
        node* newHead = head->next;
        delete head; // avoid memory leak
        head = newHead;
    }
    node* get_tail(){
        node* tail = head;
        while(tail!=NULL){
            tail = tail->next;
        }
        return tail;
    }
    int back(){
        return get_tail()->data;
    }
    void push_back(int x){
        if (head == NULL){
            head = new node(x);
            return;
        }
        node* tail = get_tail();
        node* v = new node(x);
        tail->next = v;
    }
    void pop_back(){
        if(head == NULL){
            cerr<<"Error: List is empty\n";
            exit(0);
        }
        if(head->next ==NULL){
            //forget about head
            delete head;
            head = NULL;
            return;
        }
        // pick the element that preceeds tail
        node* pre_tail = head;
        while(pre_tail->next->next!=NULL){
            pre_tail=pre_tail->next;
        }
        node* tail = pre_tail->next;
        pre_tail->next = NULL;
        delete tail;
    }
    void print(){
        node* v =head;
        cout<<"[";
        while(v!=NULL){
            cout<<v->data;
            if(v->next != NULL){
                cout<<" ";
            }
            else cout<<"]\n";
            v = v->next;
        }
        
    }
};
int main(){
    int tests; 
    cin>>tests;
    Linked_list L=  Linked_list();
    for (int i = 0; i<tests; i++) {
        string s;
        cin>>s;
        int x;
        if(s == "push_back"){
            cin>>x;
            L.push_back(x);
            L.print();
            cout << "OK\n";
        }
        if(s == "push_front"){
            cin>>x;
            L.push_front(x);
            cout << "OK\n";
        }
        if(s == "pop_front"){
            L.pop_front();
            cout<<"OK\n";
        }
        if(s == "pop_back"){
            L.pop_back();
            cout<<"OK\n";
        }
        L.print();
    }
}
