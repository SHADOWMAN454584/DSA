#include<iostream>
#include<vector>
using namespace std;
int main(){
    int minuites=2;
    vector<int> arr={4,10,10};
    vector<int> grumpy={1,1,0};
    int n=arr.size();
    int k=minuites;
    int preLoss=0;
    for(int i=0;i<k;i++){
        if(grumpy[i]==1){
            preLoss+=arr[i];
        }
    }
    int maxLoss=preLoss;
    int maxIdx=0;
    int i=1,j=k;
    while(j<n){
        int currLoss=preLoss;
        if(grumpy[j]==1) currLoss+=arr[j];
        if(grumpy[i-1]==1) currLoss-=arr[i];
        if(maxLoss<currLoss){
            maxLoss=currLoss;
            maxIdx=i;
        }
        preLoss=currLoss;
        i++;
        j++;
    }
    for(int i=maxIdx;i<maxIdx+k;i++){
        grumpy[i]=0;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(grumpy[i]==0){
            sum+=arr[i];
        }
    }
    cout<<sum;
}