#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v, int idx, int max){
     if(idx==v.size()){   
    cout<<endl<<max;
    return;
    }
        
    if(max<v[idx]){
        max=v[idx];
    }
    cout<<v[idx]<<" ";
    display(v, idx+1, max);
}
int max(vector<int>& v,int idx){
    if(idx==v.size()) return INT8_MIN;
    return max(v[idx],max(v,idx+1));//without using any extra element
}
int main(){
    int arr[]={1,4,3,25,6,7,8,9,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<endl;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    //int max = v[0];
    //display(v, 0, v[0]);
    cout<<max(v,0);
}