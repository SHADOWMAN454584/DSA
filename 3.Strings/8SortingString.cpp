#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string n;
    getline(cin,n);
    sort(n.begin(),n.end());
    cout<<n;
}