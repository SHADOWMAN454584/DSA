#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void stockspanprob(vector<int>& v){
    stack<int> st;
    int n=v.size();
    int pgi[n];
    pgi[0]=1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size()>0 && v[st.top()]<=v[i]){
            st.pop();
        }
        if(st.size()==0) pgi[i]=-1;
        else pgi[i]=st.top();
        pgi[i]=i-pgi[i];
        st.push(i);
    }
    for(int i=0;i<(sizeof(pgi)/sizeof(pgi[0]));i++){
        cout<<pgi[i]<<" "; 
    }
}
int main(){
    vector<int> v={100,80,60,81,70,60,75,85};
    stockspanprob(v);
}