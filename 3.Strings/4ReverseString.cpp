#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string n;
    cin>>n;
    cout<<n<<endl;
    reverse(n.begin()+4,n.end()-3);
    cout<<n<<endl;
    int len=n.length();
    reverse(n.begin(),n.begin()+len/2);//reversing half of the string
    cout<<n<<endl;
}