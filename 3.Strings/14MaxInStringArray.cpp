#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string arr[]={"0001","8760","0987","5432","0934","0134"};
    vector<int> v;
    int maxNum=stoi(arr[0]);
    string maxS;
    for(int i=1;i<6;i++){
        int x=stoi(arr[i]);
        if(maxNum<x) {
            maxNum=x;
            maxS=arr[i];
        }
    }
    cout<<maxNum<<endl<<maxS;
}