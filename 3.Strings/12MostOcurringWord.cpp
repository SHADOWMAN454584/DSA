#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s="My Name is Soham Patil and i am also a a a a a a a a coder and a student";
    stringstream newss(s);
    string temp;
    vector<string> v;
    while(newss>>temp){
        v.push_back(temp);
    }
    int maxCount =1;
    int count=1;
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxCount=max(maxCount,count);
    }
    cout<<maxCount<<endl;
    count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxCount){
            cout<<v[i]<<" "<<count<<endl;
        }
    }
}