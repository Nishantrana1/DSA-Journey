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
            st++;
            end--;
    }

}

int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    int target=3;
    cout<<binary(arr,target,arr.size());
}