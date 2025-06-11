#include<iostream>
using namespace std;

class Node{
    public:
        int val;
        Node*next;
        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};
class LinkedList{
    public:
        Node* head;
        Node* tail;
        int size;
        LinkedList(){
            head=tail=NULL;
            size=0;
        }
        void insertattail(int val){
            Node* temp=new Node(val);
            if(size==0) head=tail=temp;
            else {
                tail->next=temp;
                tail=temp;
            }
        }
        void deleteduplictes(Node* head){
            Node* a=head;
            Node* b=head->next;
            if(head==NULL || head->next==NULL) return;
        }
};
int main(){
    LinkedList ll;
    ll.insertattail(10);
    ll.insertattail(10);
    ll.insertattail(10);
    ll.insertattail(20);
    ll.insertattail(20);
    ll.insertattail(30);
    ll.insertattail(40);
    ll.insertattail(40);
    
}