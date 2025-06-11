#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x; cout<<"Enter the target: "; 
    cin>>x;
    int n;
    cout<<"Enter the number of elements you want to enter in the vector: ";
    cin>>n;
    vector<int> v(n); 
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==x){
                cout<<"("<<v[i]<<" "<<v[j]<<")"<<endl;
            
            }       
        }  
    }
}