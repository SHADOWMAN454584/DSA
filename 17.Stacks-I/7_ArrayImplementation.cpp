#include<iostream>
#include<stack>
using namespace std;
class Stack{
        public:
            int arr[5];
            int idx;
            Stack(){
                idx=-1;
            }
            void push(int val){
                if(idx==4){
                    cout<<"Stack is Full"<<endl;
                    return;
                }
                idx++;
                arr[idx]=val;
            }
            void pop(){
                idx--;
            }
            int top(){
                if(idx==-1){
                    cout<<"Stack is Empty";
                    return -1;
                }
                cout<<arr[idx];
            }
            int size(){
                return idx+1;
            }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.top();
}
