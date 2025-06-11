#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;//you need not to define the size of the array
    v.push_back(16);
    v.push_back(3453);
    v.push_back(34);
    v.push_back(324);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

}
//vectors are dynamic arrays
//vectors are part of the standard template library
//vectors are defined in the header file vector
/*if vector of array size is full then it will automatically 
increase the size of the array by 2 times*/