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
int main(){
    Node a(10);
    Node b(12);
    Node c(54);

    a.next=&b;
    b.next=&c;
    c.next=NULL;
    Node temp=a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;  
        temp=*(temp.next);
    }
}