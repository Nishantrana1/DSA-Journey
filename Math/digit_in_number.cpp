#include<iostream>
using namespace std;

int digit_in_number(int n){
    int sum=0;
    
    while(n != 0){
        int digit = n%10;
       sum=digit+sum;
       n=n/10;
    }
    return sum;
}

int main(){
    int n=2156;
    cout<<digit_in_number(n)<<endl;
}