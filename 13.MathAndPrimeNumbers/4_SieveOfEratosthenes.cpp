#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void fullsieve(vector<bool>& sieve){
        int n=sieve.size()-1;
        for(int i=2;i<sqrt(n);i++){
            for(int j=i*2;j<=n;j++){
                sieve[j]=0;
            }
        }
}
int soe(int n){
    if(n<=2) return 0;
    n=n-1;
    int count=0;
    vector<bool> sieve(n+1,1);
    fullsieve(sieve);
    sieve[0]=0;
    sieve[1]=0;
    for(int i=2;i<=n;i++){
        if(sieve[i]==1) count++;
    }
    return count;
}
int main(){
    cout<<soe(50);
}