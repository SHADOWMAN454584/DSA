// not an normal search using binary search
//it reduces the time complexity
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v(14);
    v={1,2,5,6,9,5,64,25,63,95,100,7,8,10};
    bool flag=false;
    int n;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<",";
    }
    cout<<endl;
    cin>>n;
    int lo=0;
    int hi=v.size()-1;
    while(lo<=hi){
        int mid=lo+(lo+hi)/2;
        if(v[mid]==n) {
            flag=true;
            break;
        }
        else if(v[mid]>n){
            hi=mid-1;
        }
        else {
            lo=mid+1;
        }
    }
    if(flag==true) cout<<"element have been found";
    else cout<<"element not available";
}