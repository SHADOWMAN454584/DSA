#include<iostream>
using namespace std;
int maze(int er,int ec){
    if(er<1 || ec<1) return 0;
    if(er==1 && ec==1) return 1;
    int dw=maze(er-1,ec);
    int rw=maze(er,ec-1);
    int tw=dw+rw;
    return tw;
}
//using only two variables in recursive function
int main(){
    cout<<maze(9,9);
}
