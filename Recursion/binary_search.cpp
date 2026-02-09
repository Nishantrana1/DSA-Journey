/*
#include<iostream>
#include<vector>
using namespace std;

int binary(vector<int> arr,int tar, int st,int end){
    int mid=st+(end-st)/2;

    if(tar==arr[mid]){
        return mid;
    }
    else if(tar<arr[mid]){
       
        return binary(arr,tar,st,end=mid-1);
    }
    else if(tar>arr[mid]){
        
        return binary(arr,tar,st=mid+1,end);
    }

}

int main(){
    vector<int> arr={1,3,5,7,9,15,21,25,39,55};
    int target=3;
    int st=0,end=arr.size()-1;
    cout<<binary(arr,target,st,end);
    
}
*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int binsearch(vector<int>& nums, int target,int st,int end){
        if(st<=end){
        int mid=st+(end-st)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(nums[mid]<target){
               
                return binsearch(nums,target,st=mid+1,end);
            }
            else {
                return binsearch(nums,target,st,end=mid-1);
                
            }
        }
        
        return -1;
    }
    int search(vector<int>& nums, int target) {
       return binsearch(nums,target,0,nums.size()-1);
    }
};

int main(){
    Solution s;
     vector<int> arr={1,3,5,7,9,15,21,25,39,55};
int target=25;
    cout<<s.search(arr,target);
}