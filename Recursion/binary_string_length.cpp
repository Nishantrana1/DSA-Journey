

#include <iostream>
using namespace std;

void generateBinary(int index, int n, string &curr) {
   
    if (index == n) {
        cout << curr << endl;
        return;
    }

    
    curr.push_back('0');
    generateBinary(index + 1, n, curr);
    curr.pop_back();  

   
    curr.push_back('1');
    generateBinary(index + 1, n, curr);
    curr.pop_back();  
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    string curr = "";
    generateBinary(0, n, curr);

    return 0;
}
