#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
// int n;
//     cout<<"Enter the number of elements you want to enter in the vector: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cout<<"Enter the element: ";
//         cin>>x;
//         v.push_back(x);
//     }
