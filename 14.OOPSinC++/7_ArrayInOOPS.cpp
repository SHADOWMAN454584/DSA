#include<iostream>
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
        public:
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
        int score;
        int health;
        int age;
        bool alive;
        Gun gun;
        Helmet helm;
    public:
        void setscore(int score){
            this->score=score;
        }
        void sethealth(int health){
            this->health=health;
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
            Helmet *helm=new Helmet;
            helm->setlevel(level);
            int health;
            if(level==1) health=25;
            else if(level==2) health=50;
            else if(level==3) health=75;
            else if(level==4) health=100;
            helm->sethp(health);
            this->helm=*helm;
        }
        int getscore(){
            return score;
        }
        int gethealth(){
            return health;
        }
        int getHelmet(){
            return health;
        }
        Gun getgun(){
            return gun;
        }
        int getage(){
            return age;
        }
        int isalive(){
            return alive;
        }



};
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
    soham.setIsalive(false);
    soham.setage(18);
    soham.setgun(awm);

    parth.sethealth(45);
    parth.setscore(351);
    parth.setIsalive(true);
    parth.setage(18);
    parth.setgun(akm);
    raghav->setgun(awm);
    Player players[3]={soham,parth,*raghav};
    cout<<players[0].gethealth()<<endl;
    cout<<players[1].gethealth()<<endl;
    cout<<players[2].gethealth()<<endl;
    

    // cout<<(*raghav).gethealth()<<endl;
    // Gun gun123=soham.getgun();
    // cout<<gun123.damage<<"-damage "<<gun123.ammo<<"-ammo "<<gun123.scope<<"-scope "<<endl;
}