#include<bits/stdc++.h>
using namespace std;
//Selection Sort= Select the minimum from unsorted array and swap with the ith variable (Select the minimum)

//Bubble Sort= Works on adjacent swapping (if two guys are not in correct order swap them) biggest element comes in last in the form of bubble

//Insertion Sort = Pick and element and insert in at its correct position of the sorted array by adj swapping. Insertion was the most easy for me

void selectionSort(vector<int>&arr){ //Best Case T.C- O(N^2) worst case-o(N^2)
    int n=arr.size();
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[mini]>arr[j]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}
void bubbleSort(vector<int>&arr){ //Best Case T.C- O(N) worst case-o(N^2) //best case is if what if array is sorted, then we can use a flag variable optimization technique and break
    int n=arr.size();
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
               
            }
        }
        cout<<"runs"<<endl;
    }
}
void insertionSort(vector<int>&arr){  //Best Case T.C- O(N) worst case-o(N^2) //same as bubble sort
    int n=arr.size();
    for(int i=0;i<n;i++){
        while(i>0 && arr[i-1]>arr[i]){
            swap(arr[i],arr[i-1]);
            i--;
        }
    }
}

int main() {
   vector<int>arr={13,46,24,52,20,9};
   vector<int>arr2={1,2,3,4,5};
   insertionSort(arr);
   for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
   }
   
        
}