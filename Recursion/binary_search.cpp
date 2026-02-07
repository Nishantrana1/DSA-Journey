#include<iostream>
#include<vector>
using namespace std;

int binary(vector<int> arr,int tar, int n){
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
            if(arr[mid]==tar)
            return mid;
            else if(arr[mid]<tar){
                    st=mid+1;
            }
            else if(arr[mid]>tar){
                end=mid-1;
            }
    }

}

int main(){
    vector<int> arr={1,3,5,7,9,15,21,25,39,55};
    int target=39;
    cout<<binary(arr,target,arr.size());
}