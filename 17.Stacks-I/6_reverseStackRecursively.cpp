#include<iostream>
#include<stack>
using namespace std;
void displayrev(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    displayrev(st);
    cout<<x<<" ";
    st.push(x);
}
void pushatBottom(stack<int>& st,int val){
    if(st.size()==0) {
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushatBottom(st,val);
    st.push(x);
}
void reverse(stack<int>& st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushatBottom(st,x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    displayrev(st);
    cout<<endl;
    //pushatBottom(st,54);
    reverse(st);
    displayrev(st);
}