#include<iostream>
#include<typeinfo>
using namespace std;


int main(){
    int a[]={1,2,3,4};
    char str[]={'a','b','c'};
    cout<<typeid(a).name()<<endl;
    cout<<typeid(str).name()<<endl;
    return 0;
}