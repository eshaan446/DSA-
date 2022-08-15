#include<bits/stdc++.h>
using namespace std;

bool linearsearch(int arr[][2], int target, int row, int col){
	for(int i=0;i<row;i++){                                         //Linear Searching a 2D matrix
		for(int j=0;j<col;j++){
			if(arr[i][j]==target){
				return 1;
			}
		}
	}
	return 0;

}
void checkmaxsum(int arr[][2],int row,int col){
	int mx=INT_MIN;
	for(int i=0;i<row;i++){
		int sum=0;
		for (int j= 0; i < col; ++i)
		{
			sum+=arr[i][j];
			mx=max(mx,sum);
			
		}
		
}
cout<<"Maximum row sum is"<<mx<<endl;
}
int main(){
	int target;
	int arr[3][2]={};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>arr[i][j];
		}
		
	}
	//Printing the array
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr[i][j];
		}
		cout<<endl;
		
	}
	
	cin>>target;
	if(linearsearch(arr,target,3,2)){
		cout<<"Element is present"<<endl;             
	}
	else{
		cout<<"Not present";
	}
	checkmaxsum(arr,3,2);
	

	
	
	
	
}

