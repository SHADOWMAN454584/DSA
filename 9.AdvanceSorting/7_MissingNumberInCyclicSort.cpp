#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(8);
    
    v={5,7,1,2,9,3,6,4,8};
    int n=v.size();
    for(int e:v){
        cout<<e<<" ";
    }
    cout<<endl;
    vector<int> v1(n,0);
    for(int i=0;i<n;i++){
        int correctidx=v[i]-1;
        if(correctidx==i || v[i]==n) i++;
        else swap(v[i],v[correctidx]);
    }
    for(int i=0;i<n;i++){
        if(v[i]!=i) cout<<i<<" ";
    }
} 