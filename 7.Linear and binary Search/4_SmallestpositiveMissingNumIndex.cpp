#include<iostream>
using namespace std;
// int main(){
//     int arr[]={1,2,3,4,8,9,10,67};
//     int n=8;
//     for(int i=0;i<n;i++){
//         if(i!=arr[i]){
//             cout<<i;
//             break;
//         }
//     }
//     normal long method 
//     ## NOW USING BINARY SEARCH METHOD
    
// }
int main(){
    int arr[]={0,1,3,4,8,9,10};
    int n=7;
    int lo=0,hi=n-1,ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid){
            lo=mid+1;
        }
        else {
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<ans;
}