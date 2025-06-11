#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s=("ABCXDXYZZTYP"); 
    string str;
    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    cout<<str;
}