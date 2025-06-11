#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int main(){
    vector<int> v={7,1,2,5,8,4,9,3,6};
    int n=v.size();
    int k=3;
    vector<int> s;
    int Maxsum=INT_MIN;
    for(int i=0;i<n-k;i++){
       int sum=0;
       for(int j=i;j<i+k;j++){
        sum+=v[j];
       }
       Maxsum=max(Maxsum,sum);
    }
    for(int e:s){
        cout<<e<<" ";
    }
    cout<<endl;
    cout<<Maxsum;
}