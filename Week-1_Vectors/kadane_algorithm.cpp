#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){

    int maxsum = INT_MIN;
    vector<int> arr = {3, -4, 5, 4, -1, 7, -8};
    int currentSum = 0;

    for(int st = 0; st < arr.size(); st++){
        currentSum += arr[st];
        maxsum = max(currentSum, maxsum);

        if(currentSum < 0){
            currentSum = 0;
        }
    }

    cout << "Max Subarray Sum is " << maxsum;
}
