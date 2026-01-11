#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> fir={1,2,3,4,5};
    cout<<fir[0]<<endl;
    cout<<fir[2]<<endl;
    cout<<fir[4]<<endl;
    vector<int> sec(4,2);
    for(int x:sec){
    cout<<sec[x]<<" ";}
}