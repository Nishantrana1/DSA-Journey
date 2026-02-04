#include<iostream>
#include<vector>
using namespace std;

bool sarr(vector<int>arr,int n){
if (n == 0 || n == 1)
    return true;
if(arr[n-1]<arr[n-2]){
return false;
}

return sarr(arr,n-1);
}

int main(){
    vector<int>vec={1,2,9,4,5};
    int n=5;
    cout<<sarr(vec,n);
}