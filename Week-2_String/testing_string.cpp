#include<iostream>
#include<string>
using namespace std;

int main(){

    string s="hello word";
    int n=s.size();
    int i=0;
    string word;
    while(i<n&& s[i] != ' '){
        word+=s[i];
        i++;
    }
    cout<<word;
}