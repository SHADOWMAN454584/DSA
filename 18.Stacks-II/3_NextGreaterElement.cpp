#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void nextgreatelement(vector <int>& arr){
    int n=arr.size();
    int nge[n-1]={-1};
    stack<int> st;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop(); 
        }
        if(st.size()==0) nge[i]=-1;
        else nge[i]=st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<sizeof(nge)/sizeof(nge[0]);i++){
        cout<<nge[i]<<" ";
    }
}
int main(){
    vector<int> arr={3,1,2,7,4,6,2,3};
    nextgreatelement(arr);
}