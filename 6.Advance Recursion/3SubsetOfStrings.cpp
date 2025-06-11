#include<iostream>
#include<vector>
using namespace std;
void Stringsubset(string ans,string original,vector<string>& v){
    if(original==""){
        //cout<<ans<<endl;
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    Stringsubset(ans+ch,original.substr(1),v);
    Stringsubset(ans,original.substr(1),v);
}
int main(){
//for storing the subsets you can add an string vector
    vector<string> v;
    string str="wild";
    Stringsubset("",str,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<"The number of subset are "<<v.size();
    cout<<endl<<str.substr(1);
}