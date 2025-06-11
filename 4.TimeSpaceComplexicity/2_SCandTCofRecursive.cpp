#include<iostream>
using namespace std;
int power(int a,int b){
    if(a==0) return 0;
    else if(b==0) return 1;//t.c will O(b)times
    return a*power(a,b-1);  //s.c becomes O(2b)=O(b)
    //space complexity O(2b) because the fuction gets called b times with 2 local varables
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}