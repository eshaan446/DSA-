#include<bits/stdc++.h>
using namespace std;
class Stack{
    int top;
    int *arr;
    int size;
public:

    Stack(int s){
        this->size=s;
        top=-1;
        arr=new int(s);
    }
    void push(int d){
        if(size-top>1){
            top++;
            arr[top]=d;
        }
        else{
            cout<<"Stack Overflowed\n";
        }
    }
    void pop(){
        if(size>=0){
            top--;
        }
        else{
            cout<<"Stack Undeflowed\n";
        }
    }
    bool isEmpty(){
        if(top<0){
            return 1;
        }
        else{
            return 0;
        }
    }
    void peek(){
        if(size>=0){
            cout<<arr[top]<<endl;
        }
        else{
            cout<<"No top element\n";
        }
    }
        
    



};
int main(){
    Stack st(5);
    st.push(5);
    st.push(8);
    st.push(6);
    
    st.pop();
    st.pop();
    st.peek();

    
    
    if(st.isEmpty()){
        cout<<"Stack is empty\n";
    }
    else{
        cout<<"Stack is not empty\n";
    }
    

}