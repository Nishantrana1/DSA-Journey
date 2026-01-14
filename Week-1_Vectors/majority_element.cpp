#include<iostream>
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
}