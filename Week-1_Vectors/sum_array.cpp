#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {-2, 1, -3, 4,5};

    int currentSum = 0;
    

    for (int s = 0; s < arr.size(); s++) {
        
            currentSum += arr[s];
        
      
    }

    cout << "Array Sum = " << currentSum;
}
