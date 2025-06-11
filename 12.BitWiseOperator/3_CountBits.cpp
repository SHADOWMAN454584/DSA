#include<iostream>
using namespace std;
int countSetBit(int n){
    return __builtin_popcount(n);
}
int main(){
    cout<<countSetBit(65);
}