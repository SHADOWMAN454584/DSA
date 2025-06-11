#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> v={7,1,2,5,8,4,9,3,6};
    int n=v.size();
    int Maxsum=INT_MIN;
    int k=4;
    int MaxIdx=0;
    int sum=0;
    int i=1,j=k;
    for(int i=0;i<k;i++){
        sum+=v[k];
    }
    Maxsum=sum;
    while(j<n){
        sum=sum+v[j]-v[i-1];
        if(Maxsum<sum){
            Maxsum=sum;
            MaxIdx=i;
        }
        
        i++;
        j++;
    }
    cout<<MaxIdx<<endl<<Maxsum;
}