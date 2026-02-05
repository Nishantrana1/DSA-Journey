#include <iostream>
using namespace std;

void generateBinary(int index, int n, string &curr) {
    // base case
    if (index == n) {
        cout << curr << endl;
        return;
    }

    // choice 1: put '0'
    curr.push_back('0');
    generateBinary(index + 1, n, curr);
    curr.pop_back();  // backtrack

    // choice 2: put '1'
    curr.push_back('1');
    generateBinary(index + 1, n, curr);
    curr.pop_back();  // backtrack
}

