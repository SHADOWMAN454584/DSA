#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter String a: ";
    cin>>s1;
    cout<<"Enter string b: ";
    cin>>s2;
    int a=s1.length();
    int b=s2.length();
    if(a==b){
        cout<<true;
    }
    else
        cout<<false;  
}