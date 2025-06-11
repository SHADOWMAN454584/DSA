#include<iostream>
#include<string>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sc>ec || sr>er) return 0;
    else if(sc==ec || sr==er) return 1;
    int rw=maze(sr,sc+1,er,ec);
    int dw=maze(sr+1,sc,er,ec);
    int tw=dw+rw;
    return tw;
}
void printpath(int sr,int sc,int er,int ec,string s){
    if(sc>ec || sr>er) return;
    else if(sc==ec && sr==er) {
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,s+'R');
    printpath(sr+1,sc,er,ec,s+'D');
}
int main(){
    cout<<maze(0,0,2,2)<<endl; 
    printpath(1,1,3,3,"");
}