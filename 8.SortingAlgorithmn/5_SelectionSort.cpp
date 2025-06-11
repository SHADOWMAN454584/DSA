#include<iostream>
#include<vector>
using namespace std;
void swap(int& a,int& b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    vector<int> v(4);
    v={5,3,1,2};
    int n=v.size();
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        int min=INT8_MAX;
        int mindx=-1;
        for(int j=i;j<n;j++){
            if(v[j]<min){
                min=v[j];
                mindx=j;
            }
        }
        swap(v[i],v[mindx]);
    }
    for(int e:v){
        cout<<e<<" ";
    }
}