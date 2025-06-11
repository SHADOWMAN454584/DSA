#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& v,int si,int ei){
    int pivotElement=v[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(v[i]<=pivotElement) count++;
    }
    int pivotIndex=count+si;
    swap(v[si],v[pivotIndex]); 
    int i=si;
    int j=ei;
    while(i<pivotIndex && j>pivotIndex){
        if(v[i]<=pivotElement) i++;
        if(v[j]>pivotElement) j--;
        else if(v[i]>pivotElement && v[j]<=pivotElement){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void quicksort(vector<int>& v,int si,int ei){
    if(si>=ei) return;
    int pi=partition(v,si,ei);
    quicksort(v,si,pi-1);
    quicksort(v,pi+1,ei);

}
int main(){
    vector<int> v(8);
    v={5,4,7,1,2,9,3,6,8};
    int n=v.size();
    for(int e:v){
        cout<<e<<" ";
    }
    quicksort(v,0,n-1);
    cout<<endl;
    for(int e:v){
        cout<<e<<" ";
    }
} 