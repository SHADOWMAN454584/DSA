#include <iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    v[0]=100;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
//if we add & in the function definition, the value of the vector will change in the main function as well.
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    display(v);
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
//vectors are passed by value to the function.
//each time you pass a vector to a function, a new copy of the vector is created.
//v[0]*=100; will change the value of the first element of the vector in the display function.
//v[0]=100; will not change the value of the first element of the vector in the display function.