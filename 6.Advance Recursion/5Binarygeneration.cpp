#include<iostream>
#include<vector>
using namespace std;
void generateString(string s,int n){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    generateString(s+"0",n);
    generateString(s+"1",n);
}
int main(){
    int n=3;
    generateString("",n);
}