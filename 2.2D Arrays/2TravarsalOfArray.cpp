#include<iostream>
using namespace std;
int main(){
    int arr[9][9];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=i*j;
        }
    }
    
        for(int j=0;j<3;j++){
            cout<<arr[0][j]<<" ";
        }
        
}