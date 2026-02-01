#include<iostream>

using namespace std;

int add(int n,int sum){
    if(n==1){
        sum=sum+1;
        return sum;
    }
     sum = sum + n ;
     return add(n-1,sum);
} 

int main(){
    int n=4;
    int sum=0;
    add(n,sum);
    cout<<sum;
}