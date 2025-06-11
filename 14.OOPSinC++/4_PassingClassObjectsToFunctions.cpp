#include<iostream>
#include<vector>
using namespace std;
class player{
    private:
    int health;
    int score;
    int age;
    bool alive;
    public:
    int gethealth(){
        return health;
    }
    int getscore(){
        return score;
    }
    int getage(){
        return age;
    }
    int isalive(){
        return alive;
    }
    int sethealth(int Health){
        this->health=Health;
    }
    int setscore(int score){
        this->score=score;
    }
    int setage(int age){
        this->age=age;
    }
    void setIsalive(bool alive){
        this->alive=alive;
    }



};
int addScore(player a,player b){
    return a.getscore()+b.getscore();
}
player getmaxscoreplayer(player a,player b){
    if(a.getscore()>b.getscore()){
        return a;
    }
    else return b;
}
int main(){
    player soham;
    player parth;

    soham.sethealth(45);
    soham.setscore(351);
    soham.setIsalive(true);
    soham.setage(18);
    
    parth.sethealth(45);
    parth.setscore(351);
    parth.setIsalive(true);
    parth.setage(18);
    cout<<addScore(soham,parth)<<endl;
    player s=getmaxscoreplayer(soham,parth);
    cout<<s.getscore()<<endl;
}