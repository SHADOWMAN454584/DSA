#include<iostream>
using namespace std;
int power(int x,int y){
    if(y==0) return 1;
    if(y%2!=0){
        int ans=power(x,y/2);
        return ans*ans*x;
    }
    else{
    int ans=power(x,y/2);
    return ans*ans;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}