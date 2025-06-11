#include<iostream>
#include<vector>
using namespace std;
#include <algorithm>
int main(){
    vector<int> v;
    int n;
    v.push_back(16);
    v.push_back(3);
    v.push_back(34);
    v.push_back(324);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

}
