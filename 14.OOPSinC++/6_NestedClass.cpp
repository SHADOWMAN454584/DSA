#include<iostream>
#include<vector>
using namespace std;

class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};

class Player{
    class Helmet{
        private:
        int hp;
        int level;
        public :
            void sethp(int hp){
                this->hp=hp;
            }
            void setlevel(int level){
                this->level=level;
            }
            int gethp(){
                return hp;
            }
            int getlevel(){
                return level;
            }
        

    };
    private:
            int health;
            int score;
            int age;
            bool alive;
            Gun gun;
            Helmet helm;
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
    Gun getgun(){
        return gun;
    }
    void sethealth(int Health){
        this->health=Health;
    }
    void setscore(int score){
        this->score=score;
    }
    void setage(int age){
        this->age=age;
    }
    void setIsalive(bool alive){
        this->alive=alive;
    }
    void setgun(Gun gun){
        this->gun=gun;
    }
    void setHelmet(int level){
        Helmet *helm =new Helmet;
        helm->setlevel(level);
        int health;
        if(level==1) health=25;
        else if(level==2) health=50;
        else if(level==3) health=75;
        else if(level==4) health=100;
        else cout<<"Entered non functional error" ;
        helm->sethp(health);
        this->helm=*helm;
    }

};
int addScore(Player a,Player b){
    return a.getscore()+b.getscore();
}
Player getmaxscorePlayer(Player a,Player b){
    if(a.getscore()>b.getscore()){
        return a;
    }
    else return b;
}
int main(){
    Player soham;
    Player parth;
    Player *raghav=new Player;
    (*raghav).sethealth(20);
    //class gun--------awm-------------
    Gun awm;
    awm.ammo=10;
    awm.damage=100;
    awm.scope=8;
    //class object gun -------------------- akm--------
    Gun akm;
    akm.ammo=30;
    akm.damage=40;
    akm.scope=4;

    soham.sethealth(45);
    soham.setscore(351);
    soham.setIsalive(true);
    soham.setage(18);
    soham.setgun(awm);

    parth.sethealth(45);
    parth.setscore(351);
    parth.setIsalive(true);
    parth.setage(18);
    parth.setgun(akm);
    raghav->setgun(awm);
    cout<<(*raghav).gethealth()<<endl;
    Gun gun123=soham.getgun();
    cout<<gun123.damage<<"-damage "<<gun123.ammo<<"-ammo "<<gun123.scope<<"-scope "<<endl;
    // cout<<soham.getgun();
}