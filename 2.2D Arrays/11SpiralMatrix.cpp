#include<iostream>
using namespace std;
int MatrixInput(int A[100][100],int r,int c);
int MatrixOutput(int A[100][100],int r,int c);
int main(){
    int r,c,a[100][100];
    cout<<"Enter how many Rows and columns do you want ";
    cin>>r>>c;
    cout << "Enter the elements: " << endl;
    MatrixInput(a, r, c);
    cout<<"The spiral Matrix of given Matrix"<<endl;
    MatrixOutput(a, r, c);
    cout<<"is :";
    int minr=0,minc=0,maxr=r-1,maxc=c-1;
    while(minr<=maxr && minc<=maxc){
        for(int j=minc;j<=maxc;j++){
            cout<<a[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>>maxr) break;
        for(int i=minr;i<=maxr;i++){
            cout<<a[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>>maxr) break;
        for(int j=maxc;j>=minc;j--){
            cout<<a[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>>maxr) break;
        for(int i=maxr;i>=minr;i--){
            cout<<a[i][minc]<<" ";
        }
        minc++;
    }
}
int MatrixInput(int A[100][100],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>A[i][j];
        }
    }
}
int MatrixOutput(int A[100][100],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}