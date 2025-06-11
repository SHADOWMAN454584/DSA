#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,5};
    vector<int> dp(8,0);
    int size = sizeof(arr) / sizeof(arr[0]);
    int s=0;
    for(int i=0;i<size;i++){          
        dp[arr[i]]++;
        if(dp[arr[i]]>1){
            s=arr[i];
            break;
        }            
    }
    cout<<s<<"-> "<<dp[s];
}   