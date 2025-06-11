#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> v;
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v.resize(3, v1);//resizes the vectors and in (3,v1) shows size of v1 2D
                    //vector is 3 all the elements are v1 vector
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}