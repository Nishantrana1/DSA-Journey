#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr={1,2,3,4,5,6};
    cout<<*max_element(arr.begin(),arr.end());
    vector<int>::iterator it;
    for (it=arr.begin();it != arr.end(); it++){
        cout<< *(it)<< " ";
    }
}