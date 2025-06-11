#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,5,10};
    int n=v.size();
    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
    }
    bool flag=false;
    for(int i=1;i<n;i++){
        if(2*v[i]==v[n-1]){
            flag=true;
            break;
        }
    }
    if(flag) cout<<"It can be partitioned";
    else cout<<"It cannot be partioned";    
}