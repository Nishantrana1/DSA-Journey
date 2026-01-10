#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(5, 7); // size = 5, all values = 7

    for (int x : v) {
        cout << x << " ";
    }
    return 0;
}
