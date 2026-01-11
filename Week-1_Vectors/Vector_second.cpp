#include<iostream>
#include<vector>
using namespace std;


int main(){
 vector<string> names={"Nishant","Tarun"};

for (string i : names) //for each loop where i means array value not it's index value

{
    cout<<i<<endl;
}
}
