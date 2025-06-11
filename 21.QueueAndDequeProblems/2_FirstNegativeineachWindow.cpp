#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    vector<int> v={3,-4,-7,30,7,-9,2,1,6,-1};
    int k=3;
    int n=v.size();
    vector<int> ans;
    queue<int> q;
    for(int i=0;i<n;i++){
        if(v[i]<0){
            q.push(i);
        }
    }
    int i=0;
    while(i+k<=n){
        while(q.size()>0 && q.front()<i) q.pop();
        if(q.front()>=i+k || q.size()==0) ans.push_back(0);
        else ans.push_back(v[q.front()]);
        i++;    
    }
    for(int e:v){
        cout<<e<<" ";
    }
    cout<<endl;
    for(int e:ans){
        cout<<e<<" ";
    }
}