#include<bits/stdc++.h>
using namespace std;
 int getPivot(vector<int>nums){
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(nums[mid]<nums[e]){
                e=mid;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return s;    //return index
    }
int main(){
	vector<int>nums={4,5,6,7,0,1,2};
	cout<<getPivot(nums);
}