#include<iostream>
#include<map>
using namespace std;
int main(){
 multimap<string,int> mm;
 mm.insert({"tv",100});
 mm.insert({"tv",100});
 mm.insert({"tv",100});
 mm.insert({"tv",100});

    for(auto &val:mm){
        cout<<val.first<<" "<<val.second<<endl;
    }
}