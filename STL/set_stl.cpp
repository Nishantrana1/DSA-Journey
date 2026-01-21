#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> m;
    m.insert(10);
    m.insert(20);
    m.insert(30);
    m.insert(40);
    set<int>::iterator it;
    for(it=m.begin();it != m.end();it++){
        cout<<*(it)<<endl;
    }
    m.erase(10);
    m.insert(5);
    for(auto val: m){
        cout<<val<<endl;
    }
    it = m.find(5);
        if(it != m.end())
            cout<<"found"<<endl;
    cout<<m.count(10)<<endl;
    cout<<m.size();
    }
