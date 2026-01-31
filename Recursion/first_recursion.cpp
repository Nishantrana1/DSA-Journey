#include<iostream>
using namespace std;

void cal(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    return cal(n-1);
}

int main(){
    int n=0;
cout<<"Enter a Number " <<endl;
cin>>n;
cal(n);

}