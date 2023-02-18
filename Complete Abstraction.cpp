#include<bits/stdc++.h>
using namespace std;

  
class A{
public:
    virtual void func()=0;//Virtual function

    void func2(){
        cout<<"This is function 2"<<endl;
    }
};
class B:public A{
    public:
        void func(){
            cout<<"This is function overriding"<<endl;
        }
        void func2(){
            cout<<"This is B class"<<endl;
        }

};

        
int main(){
   //1- We cannot create objects of any abstract class. Declaring virtual function in a class
   //makes that class as an abstract class. Virtsual functions are the function which have no body.
   //If you inherit an abstarct class that child class also becomes an abstract class i.e we cannot create objects of it.
  //So if we want use the properties of an abstract class inside other classes. we have to do function overriding.
 //Function overriding is declaring an function with the exact same parameters as in the abstract class inside out base class.
 //Now the compiler will not run the virtual function of the abstrat class, it will run the one that we created.
//You can take the example of the banks interest rate program in case of abstraction. Soppose the public Bank class has 4% interest rate,
//But SBI, ICICI all these banks have 6-7 perc, some may have even higher or lower interest rate. so these banks classes will change the value of certain properties derived from the public bank class.
//So just convert that public Bank interest function to a virtual function. Now the other bank classes can use inheritance+function overriding to use that function from that public bank abstract class.
//Inheritance+Function overriding concept can be used to access data members and function of any abstract class.


}