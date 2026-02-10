#include<iostream>
using namespace std;

int main(){
    int x=19;
    cout<<"Value of X : "<<x<<endl;
    cout<<&x<<endl;

    int* p=&x;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
}