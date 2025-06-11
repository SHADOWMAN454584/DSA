#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort2(vector <int> &v){
    int i=0;
    int j = v.size()-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(i<j)
            if(v[i]==1 && v[j]==0){
                swap(v[i], v[j]);
                i++;
                j--;
            }
    }
}
int main(){
    vector <int> v = {1,1,0,1,0,1,1,0};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort2(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}



























































//void sort1(vector <int> &v){
//     int noo=0;
//     int nox=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==0){
//             nox++;
//         }
//         else{
//             noo++;
//         }
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<nox){
//             v[i]=0;
//         }
//         else{
//             v[i]=1;
//     }
//     }
// }
// int main(){
//     vector <int> v = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     sort1(v);
//     cout<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }