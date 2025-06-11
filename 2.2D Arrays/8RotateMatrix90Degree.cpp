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
    cout<<"Enter the Square Matrix number";
    int r, a1[10][10],a2[10][10];
    cin>>r;
    cout<<"Enter the elements of the matrix: ";
    MatrixInput(a1,r,r);
    cout<<"The Transpose of matrix: "<<endl;
    MatrixOutput(a1,r,r);
    for(int i=0;i<r;i++){
        for(int j=i+1;j<r;j++){
            int temp=a1[i][j];
            a1[i][j]=a1[j][i];
            a1[j][i]=temp;
        }
        cout<<endl;
    }   
    MatrixOutput(a1,r,r);
    for(int i=0;i<r;i++){
        for(int j=0;j<r/2;j++){
            int temp=a1[i][j];
            a1[i][j]=a1[i][r-j-1];
            a1[i][r-j-1]=temp;
        }
    }
    cout<<"The 90 degree rotated matrix is: "<<endl;
    MatrixOutput(a1,r,r);
}