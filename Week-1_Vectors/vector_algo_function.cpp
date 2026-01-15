#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> testing(vector<int> nums){
sort(nums.begin(),nums.end());
for(int val:nums){
    cout<<val<<" ";
}
cout<<endl;
sort(nums.begin(),nums.end(), greater<int>());
for(int elm:nums){
    cout<<elm<<" ";
}
cout<<endl;
}

int main(){
    vector<int> nums={2,3,1,4,5,8,6};
    testing(nums);
    return 0;
}