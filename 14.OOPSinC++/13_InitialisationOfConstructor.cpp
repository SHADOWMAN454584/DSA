#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Bike{
    public:
    static int noOfBikes;
    int tyresize;
    int enginesize;
    //initialisaiton list
    Bike(int ts,int es) : tyresize(ts),enginesize(es){} 
    
    // Bike(int tyresize,int enginesize){
    //    this->tyresize=tyresize;
    //    this->enginesize=enginesize;
    // }
    static void increasenoOfBikes(){
        noOfBikes++;
    }
};
int Bike::noOfBikes=10;
int main(){
    Bike tvs(45,48);  
    Bike maruti(55,130);
    tvs.increasenoOfBikes();
    cout<<maruti.enginesize<<" "<<maruti.tyresize<<endl;
    cout<<tvs.enginesize<<" "<<tvs.tyresize<<endl;
    cout<<tvs.noOfBikes<<endl;
    cout<<maruti.noOfBikes;
}