#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target=15;
    int st=0;
    int end=arr.size()-1;
    
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            cout<<mid<<endl;
            return 0;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        else if(target>arr[mid]){
            st=mid+1;
        } 
        
    }
}