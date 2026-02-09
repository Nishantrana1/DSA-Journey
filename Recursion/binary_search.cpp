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