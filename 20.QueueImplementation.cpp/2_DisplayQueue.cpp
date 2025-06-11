#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void displaystack(queue<int>& q){
    stack<int> st;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        st.push(x); 
    }
    while(!st.empty()){
        int x=st.top();
        st.pop();
        q.push(x);
    }
}
void display(queue<int>& q){
    if(q.empty()) return;
    int n = q.front();
    cout <<q.front()<<" ";
    q.pop();
    display(q);
    q.push(n);
}
void displayRecursive(queue<int>& q){
    if(q.empty()) return;
    int n = q.front();
    q.pop();
    displayRecursive(q);
    cout <<n<<" ";
    q.push(n);
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    displaystack(q);
    displaystack(q);
    display(q);
}