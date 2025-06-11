#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(20);
    st.push(23);
    st.push(24);
    st.push(2);
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}