#include<bits/stdc++.h>
using namespace std;
//Removing First and Last Occurence in a sorted array using Binary search
//return index
int FirstOccurence(vector<int>arr,int n,int key){
	int s=0;
	int e=n-1;
	int ans=-1;
	while(s<=e){
	int mid=s+(e-s)/2;
	if(arr[mid]==key){
		ans=mid;
		e=mid-1;

	}
	if(arr[mid]>key){
		e=mid-1;
	}
	if(arr[mid]<key){
		s=mid+1;
	}
	mid=s+(e-s)/2;
	}
	return ans;

}
int LastOccurence(vector<int>arr,int n,int key){
	int s=0;
	int e=n-1;
	int ans=-1;
	while(s<=e){
	int mid=s+(e-s)/2;
	if(arr[mid]==key){
		ans=mid;
		s=mid+1;

	}
	if(arr[mid]>key){
		e=mid-1;
	}
	if(arr[mid]<key){
		s=mid+1;
	}
	mid=s+(e-s)/2;
	}
	return ans;

}

int main(){
	vector<int>even={2,3,3,4,5,6};
	vector<int>odd={1,2,4,3,3,3,3,3,5};
	cout<<FirstOccurence(even,6,3)<<endl;;
	cout<<LastOccurence(even,6,3)<<endl;
	cout<<LastOccurence(odd,9,3)<<endl;




	}
