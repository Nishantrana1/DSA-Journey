#include<iostream>
#include<vector>
using namespace std;

int main(){


    vector<string> vec={"Nishant","Sophia","Near","Brother"};
    // size of vector
    cout<<"Vector size = "<< vec.size()<<endl;


vector<int> hey;
// for adding the value
hey.push_back(25);
cout<<hey.size()<<endl;
for (int val:hey){
    cout<<val<<" ";
}



}