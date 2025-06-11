#include<Iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,7);//vector of size 5 and all elements are 7
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    cout<<"size of the vector is: "<<v.size()<<endl;
    cout<<"capacity of the vector is: "<<v.capacity()<<endl;
    
}