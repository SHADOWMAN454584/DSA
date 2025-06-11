#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int> v={1,1,1,0,0,0,1,1,1,1,0};
    int n=v.size();
    int k=2;
    int MaxLen=INT_MIN;
    int len=INT_MIN;
    int flips=0,i=0,j=0;
    while(j<n){
        if(v[j]==1) j++;
        else {
            if(flips<k){
                flips++;
                j++;
            }
            else {
                len=j-i;
                MaxLen=max(MaxLen,len);

                while(v[i]==1) i++;
                i++;
                j++;
            }
        }
    }
    cout<<MaxLen;
}