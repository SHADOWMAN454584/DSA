#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={2,-3,4,4,-7,-1,4,-2,6};
    int n=v.size();
    int k=4;
    vector<int> ans(n-k+1);
    int p=-1;
    for(int i=0;i<n;i++){
        if(v[i]<0) p=i;{
        break;
        }
    }
    if(p==-1) ans[0]==1;
    else ans[0]=v[p];
    int i=1,j=k;
    while(j<n){
        if(p>=i) ans[i]=v[p];
        else {
            for(int z=i;z<=j;z++){
                if(v[z]<0) {
                    p=z;
                    break;
                }
                
            }
            if(p!=-1) ans[i]=v[p];
            else ans[i]=1;
        }
        i++;
        j++;
    }
    for(int e:ans){
        cout<<e<<" ";
    }
}