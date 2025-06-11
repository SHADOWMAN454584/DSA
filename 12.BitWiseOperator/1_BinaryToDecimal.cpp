#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    string binary="001101";
    int result=0;
    int n=binary.length();
    for(int i=n-1;i>=0;i--){
        char ch=binary[i];
        int num=ch-'0';
        result=result+ num*(1<<(n-i-1));
    }
    cout<<result;
}