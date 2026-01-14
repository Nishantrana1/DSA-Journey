#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={2,7,11,15};
    int target=22;
    int st=0;
    int end=arr.size()-1;
    for(int i=0;i<arr.size();i++){
        if(arr[st]+arr[end]<target){
            st++;
        }
        else if(arr[st]+arr[end]>target){
            end--;
        }
        else{
            cout<<st<<" "<<end;
            break;
        }
    }
}