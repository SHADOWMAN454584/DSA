#include<iostream>
#include<vector>
using namespace std;
void swap(int& a,int& b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    vector<int> v(3);
    v={5,0,4,0,1,0,3,0,2};
    int n=v.size();
    for(int j=0;j<n;j++){
        for(int i=0;i<n-1-j;i++){
            if(v[i]==0){
                swap(v[i],v[i+1]);
            }
        }

    } 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}