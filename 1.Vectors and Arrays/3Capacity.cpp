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
    cout<<"size of the vector is: "<<v.size()<<endl;
    cout<<"capacity of the vector is: "<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"size of the vector is: "<<v.size()<<endl;
    cout<<"capacity of the vector is: "<<v.capacity()<<endl;

}