#include<bits/stdc++.h>
using namespace std;

class heap{
public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;//we don't need anything on first index of array (1-based indexing)
        size=0;
    }
    void insert(int val){
        //Step 1- put the lement inside the array but imagine tree.
        size++;
        int index=size;
        arr[size]=val;
        int parent; //this is formula to remove the parent node of any element inside the heap tree i.e - i/2
        //Step 2- Bring that element to it's correct position 
        while(index>1){ //we will process only when we have more than two elements in heap tree right ??
            parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[index],arr[parent]);
                index=parent;
            }
            else{
                return; //everything is correctly placed at it's place
            }
        }
    }
    void print(){
        for(int i=1;i<=size;++i){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
    void deleteh(){
        //Step 1- Make the last element in heap equal to the first element ( last node value equal to the root value in heap tree)
        arr[1]=arr[size];
        size--; //Now no one can acces the last element i.e deleted
        //Step 2- Now, take that root element and place it at it's correct position, start from root as we want take that element to its correct pos
        int i=1;
        int leftindex=2*i;//formula to get the leftindex of child of any node
        int rightindex=2*i+1;//formula to get rightindex of child of any node
        if(arr[leftindex]>arr[i]){
            swap(arr[leftindex],arr[i]);
            i=leftindex;
        }
        else if(arr[rightindex]>arr[i]){
            swap(arr[rightindex],arr[i]);
            i=rightindex;
        }
        else{
            return; //it's already in it's correct position
        }

    }

};
void max_heapify(int arr[],int i,int &n){
    int left=2*i+1;
    int right=2*i+2;
    int largest;
    if(left<=n && arr[left]>arr[i]){
        largest=left;
    }
    else
        largest=i;
    if(right<=n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        max_heapify(arr,largest,n);
    }
}
int main(){
    heap h;
    //h.print();
    h.insert(56);
    h.insert(67);
    h.insert(54);
    h.insert(78);
    h.insert(89);
    //h.print();
    h.deleteh();

    //**Heapify part starts here above is just insertion deletion
    int arr[]={1,14,10,8,7,9,3,56,4,6}; //we can use a vector too
    int n=10;//this is size
    //**IMP Step** //Building heap i.e we only process from n/2-1 index of vector too 0 index in (0-based indexing)
    for(int i=n/2-1;i>=0;--i){
        max_heapify(arr,i,n);
    }
    //****//
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}


 