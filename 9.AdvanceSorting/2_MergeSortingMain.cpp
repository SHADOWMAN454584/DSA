#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& res);
void mergesort(vector<int>& v){
    int n=v.size();
    if(n <= 1) return;
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergesort(a);
    mergesort(b);
    merge(a,b,v);
}
int main(){
    int a[]={1,3,2,5,8,6,9};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int> v(a,a+n);
    for(int e:v){
        cout<<e<<" ";
    }
    cout<<endl;
    mergesort(v);
    for(int e:v){
        cout<<e<<" ";
    }
}
void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) res[k++]=a[i++];
        else res[k++] = b[j++];
    }  
    while(i<a.size()) 
        res[k++]=a[i++]; 
    while(j<b.size()) 
        res[k++]=b[j++];
}