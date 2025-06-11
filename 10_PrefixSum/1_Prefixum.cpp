#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4,5};
    int n=nums.size();
        vector<int> v(1);
        v[0]=nums[0];
        for(int i=0;i<n;i++){
            v[i]=v[i]+nums[i+1];
        }
        for(int e:v){
            cout<<e<<" ";
        }
}