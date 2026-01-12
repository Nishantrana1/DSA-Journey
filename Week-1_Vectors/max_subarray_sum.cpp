/*
#include<iostream>
#include<vector>
using namespace std;

int main(){
int n=5;
int arr[n]={1,2,3,4,5};

for (int st=0;st<n;st++){
    for (int end=st;end<n;end++){
        for ( int i= st; i<=end;i++){
            cout<<arr[i];
        }
        cout<<" ";
    }
cout<<endl;
}
return 0;
}*/



#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    cout << "Maximum Subarray Sum = " << maxSum;
}
