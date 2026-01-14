/*#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        for(int val:nums){
            int frequency=0;
            for(int elm:nums){
                if (val==elm){
                    frequency++;
                }
            }
            if(frequency>nums.size()/2){
            return val;
        }
        
        }
        return -1;
    }
    
    
};


int main(){
    Solution s;
vector<int> nums={2,2,1,1,1,1,2};
int ans=s.majorityElement(nums);
cout<<ans;
}*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int frequency=1;
        int ans=nums[0];
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                frequency++;
            }
            else{
                frequency=1;
                ans=nums[i];
            }
         if(frequency>nums.size()/2){
            return ans;
        }
       
        }
         return ans;
    }
    
   
};


int main(){
    Solution s;
vector<int> nums={2,2,1,1,1,1,2};
int ans=s.majorityElement(nums);
cout<<ans;}

