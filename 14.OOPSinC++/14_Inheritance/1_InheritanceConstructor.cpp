#include<iostream>
#include<vector>
#include<string>
using namespace std;
class vehicle{
    public:
    int tyresize;
    int enginesize;
    int lights;
    string companyname;
};
class Car: public vehicle{
    public:
    int sterringsize;
};
class Bike:public vehicle{
    public:
    int handlesize;
};

int main(){
    Bike tvs;
    tvs.tyresize=32;
    tvs.enginesize=65;
    tvs.lights=2;
    tvs.handlesize=4;
    cout<<tvs.tyresize;

}