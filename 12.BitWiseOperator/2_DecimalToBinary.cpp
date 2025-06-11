#include<iostream>
using namespace std;
int main(){
    int dec=16;
    string bi="";
    while(dec>0){
        if(dec%2==0) {
            bi="0"+bi;
        }
        else if(dec%2!=0) {
            bi="1"+bi;
        }
        dec/=2;
    }
    cout<<bi;
}