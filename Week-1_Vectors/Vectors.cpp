#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;   // declare vector

    // insert elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // access elements
    cout << "Elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
