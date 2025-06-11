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
    v={5,4,1,3};
    for(int j=0;j<v.size();j++){
        bool flag=true;
        for(int i=j;i>=0;i--){
            if(v[i]>v[i+1]){
                swap(v[i],v[i+1]);
                flag=false;
            }
            if(flag==true){
                break;
            }
        }

    } 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}