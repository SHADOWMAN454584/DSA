#include<iostream>
using namespace std;

int stair(int n){
    if(n == 3) return 4;
    else if(n == 2) return 2;
    else if(n == 1) return 1;
    return stair(n-1) + stair(n-2) + stair(n-3);
}

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << stair(i) << " ";
    }
    return 0;
}
//basically stairs problem is also a fibonacci series problem