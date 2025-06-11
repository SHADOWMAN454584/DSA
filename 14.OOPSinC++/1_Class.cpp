#include<iostream>
#include<vector>

using namespace std;
class Student{
    public:
    int rollNo;
    int health;
    long long mobNo;
    char address[50];  
    void Health(){
        cout<<"Health Is "<<health;
    }
};
int main(){
    int health[100]={};
    int score[100]={};
    char name[100][10]={};
    Student Soham;
    Soham.rollNo=18;
    Soham.health=100;
    Soham.mobNo=9011511625;
    cout<<Soham.mobNo<<" "<<Soham.health<<" "<<Soham.rollNo<<endl;
    Soham.Health();
        
}