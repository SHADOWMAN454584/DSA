#include<iostream>
#include<vector>
using namespace std;   
int main(){
    vector<int> v;
    v.push_back(16);
    cout<<v.size()<<endl;
    v.push_back(3453);
    cout<<v.size()<<endl;
    v.push_back(34);
    cout<<v.size()<<endl;
    v.push_back(324);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    v.pop_back();//removes the last element in the vector
    cout<<endl;
    cout<<v.size()<<endl;//size of the vector after pop_back
    cout<<v.capacity()<<endl;//capacity of the vector after pop_back remains same
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}