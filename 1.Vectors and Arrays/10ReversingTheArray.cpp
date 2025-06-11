#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements you want to enter in the array: ";
    cin>>n;
    int rev[n];
    for(int i=0;i<n;i++){
        cin>>rev[i];
    }
    int temp=rev[0];
    for(int i=0;i<n;i++){
        
        rev[i]=rev[n-1-i];
        
    }
    rev[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<rev[i]<<" ";
    }
}