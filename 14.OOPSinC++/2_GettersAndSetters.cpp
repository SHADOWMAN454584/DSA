#include<iostream>
using namespace std;
class Player{
    private:
    int score;
    int health;
    public:
        //setters
    void setscore(int s){
        score=s;
    }
    void sethealth(int h){
        health=h;
    }
        //getters
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }
};

int main(){
    Player soham;
    soham.setscore(150);
    soham.sethealth(45);
    cout<<"Soham's score is "<<soham.getscore()<<endl;
    cout<<"And his health is "<<soham.gethealth();
}