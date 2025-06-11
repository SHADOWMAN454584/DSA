#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class Deque{
    public:
    Node* head;
    Node* tail;
    int s;
    Deque(){
        head=tail=NULL;
        s=0;
    }
    void pushback(int val){
        Node* temp=new Node(val);
        if(s==0) head=tail=temp;
        else {
            tail->next=temp;
            temp->prev=temp;
            tail=temp;
        }
        s++;
    }
    void pushfront(int val){
        Node* temp=new Node(val);
        if(s==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        s++;
    }
    void displayRev(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void popfront(){
        if(s==0){
            cout<<"Deque is empty";
            return;
        }
        head=head->next;
        if(head) head->prev=NULL;
        if(head==NULL) tail=NULL;
        s--;
    }
    void popback(){
        if(s==0){
            cout<<"Deque is empty";
            return;
        }
        else if(s==1) {
            popfront();
            return;
        }
        Node* temp=tail->prev;
        tail->next=NULL;
        tail=temp;
        s--;        
    }
    int front(){
        if(s==0){
            cout<<"Deque is empty";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(s==0){
            cout<<"Deque is empty";
            return -1;    
        }
        return tail->val;
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}; 
int main(){
    Deque q;
    q.pushfront(10);
    q.pushfront(20);
    q.pushfront(30);
    q.pushback(40);
    q.pushback(50);
    q.pushfront(60);
    q.popback();
    cout<<q.size()<<endl;
    q.display();
    q.popfront();
    q.display(); 
}   