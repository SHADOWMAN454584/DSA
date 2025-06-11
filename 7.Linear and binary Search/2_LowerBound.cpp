#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    // int main(){
    //     int arr[8]={1,2,9,10,12,19,25,26};//array must be sorted
    //     int x=30;
    //     for(int i=0;i<8;i++){
    //         if(arr[i]>x){
    //             cout<<arr[i-1];
    //             break;
    //         }
    //     }
    // }
//lower bound means it gives less value of the given number
//now doing the same using binary search
int main()
{
    int x=19;
    bool flag=false;
    int arr[8]={1,2,9,10,12,19,25,26};
    int n=8;
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            cout<<arr[mid-1];
            flag=true;
            break;
        }
        else if(arr[mid]<x) {
            lo=mid+1;
        }
        else if(arr[mid]>x){
            hi=mid-1;
        }
    }
    if(flag==false) cout<<arr[hi];  //for upper bound return lo instead of hi
}
