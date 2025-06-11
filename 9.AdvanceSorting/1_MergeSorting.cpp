#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) res[k++]=a[i++];
        else res[k++] = b[j++];
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k++]=b[j++];;
        }
    }
    if(i==b.size()){
        while(j<a.size()){
            res[k++]=a[i++];;
        }
    }
}
int main(){
    int a1[]={1,4,5,8};
    int b2[]={2,3,6,7,9,10,12};
    int n1=sizeof(a1)/sizeof(a1[0]);
    int n2=sizeof(b2)/sizeof(b2[0]);
    vector<int> a(a1,a1+n1);
    vector<int> b(b2,b2+n2);
    vector<int> res(n1+n2);
    merge(a,b,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}