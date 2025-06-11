#include<iostream>
#include<vector>
#include<string>
using namespace std;

class A{
    private:
    int a_ka_private;
    protected:
    int a_ka_protected;
    public:
    A(){
        cout<<"Constructor A is called"<<endl;
    }
};

class B: protected A{
    public:
    B(){
        cout<<"Constructor B is called"<<endl;
    }
    void show(){
        a_ka_protected=19;
        a_ka_protected;
    }
};
class C: public B{
    public:
    C(){

        cout<<"Constructor C is called"<<endl;
    }
    void show(){
        a_ka_protected;
    }
};

int main(){
    C c;
    
}