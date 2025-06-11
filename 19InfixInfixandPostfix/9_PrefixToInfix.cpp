#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
string solve(string val1,string val2,int ch){
    string s="";
    s+=val1;
    s.push_back(ch);
    s+=val2;
    return s;

}
void postfixtoinfix(string s){
    stack<string> val;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else{
            string val1=val.top();
            val.pop();
            string val2=val.top();
            val.pop();
            string ans=solve(val1,val2,s[i]);
            val.push(ans);
        }
    }
    cout<<val.top();

}
int main(){
    string s="-/*+79483";
    cout<<s<<endl;
    postfixtoinfix(s);      
}