#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

int main(){
string st="hello";
cout<<st<<endl;
cout<<typeid(st).name()<<endl;

}