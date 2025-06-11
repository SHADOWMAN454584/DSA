#include<iostream>
#include<vector>
using namespace std;
void dispaly(int arr[],int n,int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    dispaly(arr,n,idx+1);
}
void display(vector<int>& v,int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    display(v,idx+1);
}
int main(){
    int arr[]={1,4,3,25,6,7,8,9,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    dispaly(arr,n,0);
    cout<<endl;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    display(v,0);
}