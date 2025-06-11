#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int> > v;
    vector<int> v1;// v1 is a vector of integers
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int> v2;// v2 is a vector of integers
    v2.push_back(4);
    v2.push_back(5);
    vector<int> v3; // v3 is a vector of integers
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v.push_back(v1); // v is a vector of vectors of integers you can say 2D vector 
    //you cannot store integer in v directly you have to store it in v1,v2,v3 and then store v1,v2,v3 in v
    v.push_back(v2);
    v.push_back(v3);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<v[1][1];
    cout<<v[2][4]; // This will give you an error as v[2] has only 3 elements
}