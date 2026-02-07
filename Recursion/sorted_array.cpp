#include<iostream>
#include<vector>
using namespace std;

bool sarr(vector<int>arr,int n){
if(n==0||n==1){
    return true;
}

return arr[n-1]>=arr[n-2]&&sarr(arr,n-1);
}

int main(){
    vector<int>vec={1,2,3,4,5};
    int n=5;
    cout<<sarr(vec,n);
}