#include<iostream>
#include<vector>
using namespace std;
void subsetArr(int arr[],int n,int idx,vector<int> ans){//not including &
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subsetArr(arr,n,idx+1,ans);
    ans.push_back(arr[idx]);
    subsetArr(arr,n,idx+1,ans);
}
int main(){
    int arr[]={1,2,3};
    vector<int> v;
    int n=sizeof(arr)/sizeof(arr[0]);
    subsetArr(arr,n,0,v);
}