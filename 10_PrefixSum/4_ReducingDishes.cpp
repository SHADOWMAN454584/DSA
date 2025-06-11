#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={4,3,2};
    int n=nums.size();
        vector<int> v(n);
        sort(nums.begin(),nums.end());
        v[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            v[i]=v[i+1]+ nums[i];
        }

        int idx=-1;

        for(int i=0;i<n;i++){
            if(v[i]>=0){
                idx=i;
                break;
            }
        }
        if(idx==-1) return 0;
        int x=1;
        int sum=0;
        for(int i=idx;i<n;i++){
            sum+=(nums[i]*x);
            x++;
        }
        cout<<sum;
}
// for(int i=0;i<nn;i++){
//     cout<<negative[i]<<" ";
// }