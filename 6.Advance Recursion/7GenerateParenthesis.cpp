#include<iostream>
#include<vector>
using namespace std;
void generatebinary(string s,int c,int o,int n){
    if(c==n){
        cout<<s<<endl;
        return;
    }
    if(o<n) generatebinary(s+'(',c,o+1,n);
    if(c<o) generatebinary(s+')',c+1,o,n);
    
}
int main(){
    int n=3;
    string str="";
    generatebinary(str,0,0,n);
    cout<<str.length()<<endl;
}