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
    vector<int> arr = {-2, 1, -3, 4,5};

   
    int maxsum=INT_MIN;

    for (int s = 0; s < arr.size(); s++) {
         int currentSum = 0;
        for(int end=s;end<arr.size();end++){
            currentSum += arr[end];
            maxsum=max(maxsum,currentSum);
        }
            
        
      
    }

    cout << "max subArray Sum = " << maxsum;
}

