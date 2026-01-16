#include<iostream>
#include<typeinfo>
using namespace std;


int main(){
    /*
    int a[]={1,2,3,4};
    char str[]={'a','b','c'};
    cout<<typeid(a).name()<<endl;
    cout<<typeid(str).name()<<endl;*/

    char str1[]="Nishant";
    int length=0;
    for(int i=0;str1[i]!='\0';i++){
        length++;
    }
    cout<<"the Length of string "<<length<<endl;
    return 0;
}