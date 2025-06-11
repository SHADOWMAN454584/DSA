#include<iostream>
using namespace std;

class Node{
    public: 
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node* head){
    Node* temp=head;
    if(head==NULL) return;   
    display(head->next);
    cout<<head->val<<" ";
    
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;//if i remove this line then the code will run till b 
    d->next=NULL;
    display(a);

}