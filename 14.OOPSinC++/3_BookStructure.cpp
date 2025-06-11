#include<iostream>
using namespace std;

class Book{
    public:
    char name;
    int price;
    int noOfpages;
    int countPages(int s){
        if(price<s){
            return 1;
        }
        else {
            return 0;
        }
    }
    bool isBookPresent(char book){
        if(name==book){
            return true;
        }
        else return false;
    }
};

int main(){
    Book harrypotter;
    harrypotter.name='h';
    harrypotter.price=40;
    harrypotter.noOfpages=486;
    cout<<harrypotter.countPages(4)<<endl;
    cout<<harrypotter.isBookPresent('e');


}