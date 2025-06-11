#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Stack{
        public:
            vector<int> v;
            Stack(){
                
            }
            void push(int val){
                if(v.size()==4){
                    cout<<"Stack is Full"<<endl;
                    return;
                }
                v.push_back(val);
            }
            void pop(){
                if(v.size()==0){
                    cout<<"Stack is Empty"<<endl;
                    return ;
                }
                v.pop_back();
            }
            int top(){
                if(v.size()==0){
                    cout<<"Stack is Empty"<<endl;
                    return -1;
                }
                return v[v.size()-1];
            }
            int size(){
                return v.size();
            }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.top();
}
