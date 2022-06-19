#include<bits/stdc++.h>
using namespace std;



 int printmax(int arr[],int size){
        int maxi=INT_MIN;
        for(int i=0;i<size;i++){
            maxi=max(arr[i],maxi);

        }
        return maxi;
    }
 int printmin(int arr[],int size){
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        mini=min(arr[i],mini);
    }
    return mini;
 }
int main(){

   
    
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Largest element"<<printmax(a,n)<<"\n";
    cout<<"Smallest element"<<printmin(a,n)<<"\n";

    }



