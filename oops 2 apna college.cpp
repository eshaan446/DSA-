#include<bits/stdc++.h>
using namespace std;
//Inheritance:- Single, Multiple, Multilevel, Hybrid, Hierarchial.
//Polymorphism: 2 types:- Compile time and Run time
//CT- function overloading and Operator overloading
//Runtime polymorphism- Inheritance ambiguit concept.
class A{
public:
    string name;
    int age;
    A(string s, int a){
        name=s;
        a=age;
    }
    void func(){
        cout<<"A class\n";
    }
    bool operator ==(A &obj){  //operator overloading concept
        if(obj.name==name && obj.age==age){
            return true;
        }
        return false;
    }

};

class B{
    string name;
    int age;
public:
    B(string s, int a){
        s=name;
        age=a;
    }
    void func(){
        cout<<"B class\n";
    }
};
class C{
public:
    void func(){
        cout<<"C class\n";
    }
};


int main() {
 
 
 // obj.A::func(); //Inheritance ambiguity. We use scope resolving operator :: to specify which classes function we need.
 // obj.B::func(); //can be termed as function overloading- A function has different meanings in different classes, but has the same name
 // obj.C::func();
 A obj("Eshaan",19);
 A obj2("King", 20);
 if(obj==obj2){//Operator overloading code
    cout<<"Yes";
 }
 else{
    cout<<"No";
 }

  


        
}