#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(7);
    s.insert(13);
    s.insert(50);
    s.insert(10);
    s.insert(12);
    for(auto i:s){
        cout<<i<<endl;
    }
   
}