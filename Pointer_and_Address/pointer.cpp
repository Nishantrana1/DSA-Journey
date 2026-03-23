#include<iostream>

using namespace std;

void update(int* p){
    *p=10;
}
int main(){
    int x=7;
    cout<<"Value before changing: "<<x<<endl;
    update(&x);
    cout<<"Value after changing: "<<x<<endl;
    return 0;
}