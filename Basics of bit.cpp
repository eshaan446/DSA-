#include <bits/stdc++.h>
using namespace std;



int main()
{
    //Property 1:- Property of XOR
    //XOR:- Even ones == 0 // Odd ones == 1
    //if you are given an list of integers and you have to find the element that is only occuring once?
    //You should take xor of all elements , as same will cancel out each other. 
    int arr[]={1,2,2,1,3,4,5,6,4,5,6};
    int n=11;
    int ans=0;
    for(int i=0;i<n+1;i++){
        ans=ans^arr[i];
    }
    //cout<<ans; --> 3

    //Property 2 :- Right shift and left shift operators
    //cout<< (10>>2); //read it as 10 divided by 2^2; -->2
    //cout<< (20>>1); //read it as 10 divided by 2^1; --> 10
    //cout<< (10<<2);   //read it as 10 multiplied by 2^2; --> 40
    //cout<< (20<<1);   //read it as 20 multiplied by 2^1; --> 40

    /*How to swap two numbers without using a third variable ??*/
    int a=10;
    int b=20;

    a=a^b;   //a= 10^20
    b=a^b;   //b=(10^20)^20 b==10
    a=a^b;   //a=(10^20)^10 a==20

    //cout<<a<<endl; //-->20
    //cout<<b<<endl; //-->10
    

    /* Given a number n , print xor of all numbers from 1 to n */

    int an=0;
    for(int i=1;i<=5;i++){
        an=an^i;
    }
    //cout<<an;  
    //This is a linear time easy solution , can you do it in constant time ??
    //Yes , its very easy, you need to see pattern in this problem:like
    /*
        1-->1   //till one xor
        2-->3
        3-->0
        4-->4  //till 4 xor the answer is 4 itself
        5-->1
        6-->7 //till 6 xor the ans is n+1
        7-->0 
        8-->8  //till 8 xor the ans is 8 itself
                */
    //A recurring pattern is seen 

    int N=5;
    if(N%4==0) cout<<N;
    if(N%4==2) cout<< N+1;
    if(N%4==1) cout<<1;
    if(N%4==3) cout<<0;
    //We ahve written an o(1) t.c solution



}