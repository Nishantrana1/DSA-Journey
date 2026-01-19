#include<iostream>
#include<vector>
#include<list>
using namespace std;


int main(){
list<int> l;
l.push_back(1);
l.push_back(2);
l.push_front(3);
l.push_front(4);
l.push_front(5);
l.push_front(6);
l.push_front(7);
l.remove(6);
l.sort();
l.reverse();
list<int>::iterator it;
for(it=l.begin();it != l.end();it++){
    cout<<*(it)<<" ";
}

}