#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Bike{
    public:
    int tyresize;
    int enginesize;
    Bike(int tyresize,int enginesize){
        cout<<tyresize<<" AND "<<enginesize<<endl;
    }
    Bike(int tyresize){
        cout<<tyresize<<endl;
    }
};
void print(){
    static int b;
    b=12;
    cout<<b;
    
}
int main(){
    Bike tvs(45,48);  
    Bike maruti(55);
    int b;
}