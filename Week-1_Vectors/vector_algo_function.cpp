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
bool fount=binary_search(nums.begin(),nums.end(),4);
cout<<fount<<endl;
sort(nums.begin(),nums.end(), greater<int>());
for(int elm:nums){
    cout<<elm<<" ";
}
cout<<endl;


int mx= *max_element(nums.begin(),nums.end());
cout<<mx<<endl;
int mn= *min_element(nums.begin(),nums.end());
cout<<mn<<endl;


}

vector<int> testing2(vector<int> nums){
    reverse(nums.begin(),nums.end());
    for(int val:nums){
    cout<<val<<" ";


}
}
int main(){
    vector<int> nums={2,3,1,4,5,8,6};
    testing(nums);
    testing2(nums);
    return 0;
}