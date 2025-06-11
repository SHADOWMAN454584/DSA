#include<iostream>
#include<string>
using namespace std;
void removeStr(string ans,string original ){
    if(original.length()==0){
        cout<<ans;
        return;
    }
    char ch=original[0];
    if(ch=='a') removeStr(ans,original.substr(1));
    else removeStr(ans+ch,original.substr(1));
} 
int main(){
    string str="soham patil";
    removeStr("",str);
    
    
    
    
    
    
    //without using recursive function
    // string str="soham patil";
    // string s="";
    // for(int i=0;i<str.length();i++){
    //     if(str[i]!='a') s.push_back(str[i]);
    // }
    // cout<<s;
}