#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_back(3);
    d.push_front(4);
    d.push_front(6);
    d.push_front(2);
    deque<int>::iterator it;
    for(it=d.begin();it != d.end();it++){
        cout<<*(it)<< " ";
    }
    
    
}