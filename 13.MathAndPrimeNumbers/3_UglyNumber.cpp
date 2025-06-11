#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=14;
    while(n%2==0) n/=2;
    while(n%3==0) n/=3;
    while(n%5==0) n/=5;
    if(n==1) cout<<1;
    else cout<<0;
}