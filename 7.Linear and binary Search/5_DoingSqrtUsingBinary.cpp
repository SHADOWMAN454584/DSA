#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int x=100;
    int lo=0,hi=x;
    int ans=0;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mid*mid==x){
            ans=mid;
            break;
        } 
        if(mid*mid>x){
            hi=mid-1;
        }
        if(mid*mid<x){
            lo=mid+1;
        }
        else{
            ans=hi;
        }
        
    }
    cout<<ans;  
}