#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void previousgreatelement(vector <int>& arr){
    int n=arr.size();
    int pge[n];
    pge[0]={-1};
    stack<int> st;
    st.push(arr[n-1]);
    for(int i=0;i<n;i++){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop(); 
        }
        if(st.size()==0) pge[i]=-1;
        else pge[i]=st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<sizeof(pge)/sizeof(pge[0]);i++){
        cout<<pge[i]<<" ";
    }
}
int main(){
    vector<int> arr={3,1,2,7,4,6,2,3};
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    previousgreatelement(arr);
}