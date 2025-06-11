#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(4);
    v={5,3,1,2};
    int n=v.size();
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1){
            if(v[j]>=v[j-1]) break;
            else {
                swap(v[j],v[j-1]);
                j--;
            }
        }
    }
    for(int e:v){
        cout<<e<<" ";
    }
}