#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={0,1,2,3,4};
    int n=v.size();
    int product=1;
    for(int i=0;i<n;i++){
        product*=v[i];
    }
    vector<int> v1(n);
    for(int i=0;i<n;i++){
        v1[i]=product/v[i];
    }
    for(int i:v1){
        cout<<i<<" ";
    }
}