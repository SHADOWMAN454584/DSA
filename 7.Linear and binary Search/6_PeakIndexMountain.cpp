#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(9);
    v={1,3,4,6,5,4,3,2,1};
    int lo=1;
    int hi=v.size()-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]>v[mid-1] && v[mid]>v[mid+1]){
            ans=v[mid];
            break;
        }
        else if(v[mid]>v[mid+1]) hi=mid-1;
        else lo=mid+1;
    }
    cout<<ans;
}   