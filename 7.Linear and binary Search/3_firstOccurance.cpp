#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v(14);
    v={1,2,2,3,3,3,4,4,4,4,5,5,6};
    bool flag=false;
    int n;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<",";
    }
    cout<<endl<<"Enter the first element: ";
    cin>>n;
    int lo=0;
    int hi=v.size()-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==n) {
            if(v[mid-1]!=n){
                flag=true;
                cout<<mid;
                break;
            }
            else {
                hi=mid-1;
            }
        }
        else if(v[mid]>n){
            hi=mid-1;
        }
        else {
            lo=mid+1;
        }
    }
    if(flag==false) cout<<-1;
}