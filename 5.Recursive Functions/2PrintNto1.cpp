#include<iostream>
#include<vector>
using namespace std;
int numm(int n){
    if(n==0) return 0;
    cout<<n<<endl;
    numm(n-1);
}
int kthFactor(int n, int k) {
    vector<int> f;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            f.push_back(i);
        }
    }
    if(k>f.size()){
        return -1;
    }
    else return f[k];
}
int main(){
    int n;
    cin>>n;
    cout<<numm(n)<<endl;
    cout<<kthFactor(12,3);
}   