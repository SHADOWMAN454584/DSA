#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="My Name is Soham Patil";
    stringstream newss(s);
    string temp;
    while(newss>>temp){
        cout<<temp<<endl;
    }
}
