#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    //attributes
    string name;
    int age;
    int gender;
    Student(){ 
        //default constructor
        //If we dont define parameters while defining class it will go to default constructor
        //This has to be defined if you have already defined parameterised constructor, else it gives errors
        cout<<"Default constructor"<<endl;;
    }
    Student(string a, int b, int c){ 
    //parameterised self-defined constructor
        name=a;
        age=b;
        gender=c;
    }
    ~Student(){ 
    //destructor
    //Whenever the class instance is killed from main func, destructor is called
       // cout<<"Destructor called"<<endl; 
        //This gets printed as many times as there are number of classes defined in main()
    }
    Student(Student&a){
        //copy constructor 
        //we make our own copy constructor rather than default one because that uses shallow copy, this one uses deep copy which is better
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    bool operator == (Student&a){
        //operator overloading
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        else return false;
    }


};

int main() {
    Student a("Eshaan", 20, 1); //goes to parameterised constructor
    cout<<a.age<<endl;
    Student b;//no parameters here so there has to be a default constructor(necessary)
    b.name="alana";
    b.age=19;
    b.gender=0;
    Student c("Eshaan", 20, 1);
    //Student d=a; //this is default copy constructor //uses shallow copy
    Student d(a); //using copy constructor //uses deep copy , better
    cout<<d.age<<endl;
    //cout<<b.age<<endl;
    //As there are two instances getting called up, upon exiting two times the destructor will be  called
    //if we have to compare two student classes are same as not , we are here telling the == operator to behave defferently
    //than what it is supposed to behave, this os Operator Overloading
    if(a==c){
        cout<<"They are same"<<endl;
    }
    else{
        cout<<"Nope, not same"<<endl;
    }
        
}