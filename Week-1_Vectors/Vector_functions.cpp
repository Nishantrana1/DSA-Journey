#include<iostream>
#include<vector>
using namespace std;

int main(){


    vector<string> vec={"Nishant","Sophia","Near","Brother"};
    // size of vector
    cout<<"Vector size = "<< vec.size()<<endl;

cout<<vec.front()<<endl;
cout<<vec.back()<<endl;
vector<int> hey;
// for adding the value
hey.push_back(25);
hey.push_back(35);
hey.push_back(45);
hey.push_back(55);
cout<<hey.size()<<endl;
hey.pop_back();
for (int val:hey){
    cout<<val<<" ";
}



}