#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void removeateven(queue<int>& q){
    int n=q.size();
    for(int i=0;i<n;i++){ 
        if(i%2!=0){
            int x=q.front();
            q.push(x);
        }
        q.pop();
    }
}
// void displayEven(queue<int>& q){
//     if(q.empty()) return;
//     int n = q.front();
//     q.pop();
//     displayEven(q);
//     if(n%2!=0) q.push(n);
// }
void display(queue<int>& q){
    if(q.empty()) return;
    int n = q.front();
    cout <<q.front()<<" ";
    q.pop();
    display(q);
    q.push(n);
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // displayEven(q);
    removeateven(q);
    display(q);
}