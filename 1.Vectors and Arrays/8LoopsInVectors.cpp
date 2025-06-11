#include<iostream>
#include<vector>
using namespace std;
void repeat(vector<int> v,int x){
    int count=0;
    for(int i=0;i<v.size();i++){
       if(v[i]==x){
            
            count++;
        }
        else{
            continue;
        }
        if(count!=0){
            cout<<"Element  found";
            cout<<count<<endl;
        }
        else{
            cout<<"Element not found";
        }
        cout<<endl<<count<<endl;



    }
}
int main(){
    int n;
    cout<<"Enter the number of elements you want to enter in the vector: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter the element you want to search: ";
    cin>>x;
    repeat(v,x);
}