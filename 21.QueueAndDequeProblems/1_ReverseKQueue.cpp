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
void displayRecursive(queue<int>& q){   
    if(q.empty()) return;
    int n = q.front();
    q.pop();
    cout <<n<<" ";
    displayRecursive(q);
    q.push(n);
}
void reverseK(int k,queue<int>& q){
    stack<int> st;
    for(int i=1;i<=k;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    int n=q.size();
    for(int i=1;i<=n-k;i++){
        q.push(q.front());
        q.pop();
    }
}
int main(){
    queue<int> q;
    int k=3;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    reverseK(k,q);
    displayRecursive(q);
}