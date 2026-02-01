#include<iostream>

using namespace std;

int add(int n){
    if(n==1){
        return 1;
    }
     return n+add(n-1);
} 

int main(){
    int n=4;
    int sum=0;
    cout<<add(n);
    
}