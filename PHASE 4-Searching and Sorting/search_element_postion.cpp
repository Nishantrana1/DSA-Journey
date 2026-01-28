#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    int searchInsert(vector<int>& nums, int target) {
       int st=0;
       int end=nums.size()-1;
       while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]==target){
            return mid;
        
        }
        else if(nums[mid]<target){
            st=mid+1;
        } 
        else if(nums[mid]>target){
            end=mid-1;
       }
    }
    return st;
    }

};
int main(){
    Solution s;
    vector<int> arr={1,3,5,7,9,10,11,15};
    int target=4;
    int k=s.searchInsert(arr,target);
    cout<<k<<endl;
}