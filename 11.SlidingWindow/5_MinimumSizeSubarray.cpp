#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> nums={7,1,2,5,8,4,9,3,6};
    int target=11;
    int n=nums.size();
    int i=0,j=0;
    int minLen=INT_MAX;
    int len=0;
    int sum=0;
    while(j<n){
        sum+=nums[j];
        while(sum>=target){
            len=j-i+1;
            minLen=min(minLen,len);
            sum-=nums[i];
            i++;
        }
        j++;
    }
    if(minLen==INT_MAX) cout<<0;
    else cout<<minLen;
   
}