#include<iostream>
using namespace std;
int main(){
    float a[3][3],b[3][3],c[3][3];
    float r,co;
    cout<<"Enter the number of rows and columns: ";
    cin>>r; 
    cin>>co;
    cout<<"Enter the elements of first matrix: ";
    if(r==co && co==r){
        for(int i=0;i<r;i++){
            for(int j=0;j<co;j++){
                cin>>a[i][j];
            }
        }
        cout<<"Enter the elements of second matrix: ";
        for(int i=0;i<r;i++){
            for(int j=0;j<co;j++){
                cin>>b[i][j];
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<co;j++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        cout<<"Sum of the two matrices is: "<<endl;
        for(int i=0;i<r;i++){
            for(int j=0;j<co;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Addition not possible";
    }
}