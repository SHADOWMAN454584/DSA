#include<iostream>
using namespace std;
int MatrixInput(int arr[100][100],int n,int m);
int MatrixOutput(int arr[100][100],int n,int m);
int main(){
    int a1[100][100],a2[100][100],a3[100][100],m,n,p,q;
    cout<<"Enter the number of rows and columns of the first matrix: ";
    cin>>m>>n;
    cout<<"Enter the elements of the first matrix: ";
    MatrixInput(a1,m,n);
    cout<<"Enter the number of rows and columns of the second matrix: ";
    cin>>p>>q;
    cout<<"Enter the elements of the second matrix: ";
    MatrixInput(a2,p,q);
    if(n==p){
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){              
                for(int k=0;k<n;k++){
                    a3[i][j]=0;
                    a3[i][j]+=a1[i][k]*a2[k][j];
                }
            }
        }
        MatrixOutput(a3,m,q);
    }
    else{
        cout<<"Matrix Multiplication is not possible";
    }
}
int MatrixInput(int arr[100][100],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
}
int MatrixOutput(int arr[100][100],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}