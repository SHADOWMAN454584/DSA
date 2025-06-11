#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Cricketer{
    private:
    char name[20];
    int age;
    int noOfTestMatches;
    int averageruns;
    public:
    void setname(const char* name){
        strncpy(this->name, name, sizeof(this->name) - 1);
        this->name[sizeof(this->name) - 1] = '\0';
    }
    void setage(int age){
        this->age=age;
    }
    void setnoOfTestMatches(int noOfTestMatches){
        this->noOfTestMatches=noOfTestMatches;
    }
    void setaverageruns(int averageruns){
        this->averageruns = averageruns;
    }
    const char* getname(){
        return name;
    }
    
    int getage(){
        return age;
    }
    int getnoOfTestMatches(){
        return noOfTestMatches;
    }
    int getaverageruns(){
        return averageruns;
    }
    
};

int main(){
    Cricketer virat;
    virat.setname("Virat");
    virat.setaverageruns(8530);
    virat.setage(35);
    virat.setnoOfTestMatches(154);

    Cricketer Dhoni;
    Dhoni.setname("Dhoni");
    Dhoni.setaverageruns(4590);
    Dhoni.setage(43);
    Dhoni.setnoOfTestMatches(87);

    Cricketer cricket[2]={virat,Dhoni};
    for(int i=0;i<2;i++){
        cout<<cricket[i].getname()<<endl;
        cout<<cricket[i].getaverageruns()<<endl;
        cout<<cricket[i].getage()<<endl;
        cout<<cricket[i].getnoOfTestMatches()<<endl;
        cout<<endl;
    }
}