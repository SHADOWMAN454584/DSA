#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(8);
    v={5,4,7,1,2,9,3,6,8};
    int n=v.size();
    for(int e:v){
        cout<<e<<" ";
    }
    cout<<endl;
    int i=0;
    while(i<n){
        int correctidx=v[i]-1;
        if(i==correctidx) i++;
        else swap(v[i],v[correctidx]);
    }
    for(int e:v){
        cout<<e<<" ";
    }
}