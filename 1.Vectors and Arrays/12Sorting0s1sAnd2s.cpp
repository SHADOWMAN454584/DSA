#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort2(vector<int> &v){
    int noo=0;
    int nox=0;
    int noz=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            noz++;
        }
        else if(v[i]==2){
            nox++;
        }
        else{
            noo++;
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<noz){
            v[i]=0;
        }
        else if(i<noz+noo){
            v[i]=1;
        }
        else{
            v[i]=2;
        }
    }

}
int main(){
    vector <int> v = {1,1,0,1,2,0,1,2,2,1,0,2,2};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort2(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}