#include<iostream>
using namespace std;
int MatrixInput(int arr[10][10],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
}
int MatrixOutput(int arr[10][10],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"Enter the number of rows and columns of the matrix: ";
    int r,c;
    int a1[10][10],a2[10][10];
    cin>>r>>c;
    cout<<"Enter the elements of the matrix: ";
    MatrixInput(a1,r,c);
    cout<<"The Transpose of matrix: "<<endl;
    MatrixOutput(a1,r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a2[j][i]=a1[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<a2[i][j]<<" ";
        }
        cout<<endl;
    }
}