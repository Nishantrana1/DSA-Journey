#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[]="Hello";
    int st=0;
    int end = strlen(str)-1;

    while(st<end){
        swap(str[st],str[end]);
        st++;
        end--;
    }
    cout<<str<<" "<<endl;
}