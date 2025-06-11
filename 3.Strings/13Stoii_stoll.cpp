#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str="123456";
    int x=stoi(str);//string to integer
    cout<<x;
    long long y=stoll(str);
    cout<<endl<<y;
}