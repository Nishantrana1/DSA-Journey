#include<iostream>
using namespace std;

void prime(int n){
    for(int i = 2;i*i<=n;i++){

        if(n%i==0){
            cout<<"NOT prime number"<<endl;
            return;
        }
        
            
        
    }
    cout<<"prime";
}

int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    prime(n);
}