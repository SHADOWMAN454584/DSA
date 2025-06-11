#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
double merge(vector <int> &v1, vector <int> &v2){
    vector <double> v3;
    for(int i=0; i<v1.size(); i++){
        v3.push_back(v1[i]);
    }
    for(int i=0; i<v2.size(); i++){
        v3.push_back(v2[i]);
    }
    sort(v3.begin(), v3.end());
    if(v3.size()%2==0){
        return (v3[v3.size()/2]+v3[v3.size()/2-1])/2.0;
    }
    else if(v3.size()%2!=0){
        return v3[v3.size()/2];
    }
}
int main(){
    vector <int> v1 = {1,2,3,4,5};
    vector <int> v2 = {6,7,8,9,10};
    
    
    int m=merge(v1,v2);
    cout<<m;
    return 0;
}