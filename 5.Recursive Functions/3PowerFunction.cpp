#include<iostream>
using namespace std;
int power(int a,int b){
    if(a==0) return 0;
    else if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}