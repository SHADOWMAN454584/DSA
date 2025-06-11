#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(20);
    st.push(23);
    st.push(24);
    st.push(2);
    cout<<st.size()<<endl;
    //st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}