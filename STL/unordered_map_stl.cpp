#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;
    m["tv"]=100;
    m["laptop"]=100;
    m["Phone"]=400;
    m["Dryer"]=150;
    m["Heater"]=200;
    m.erase("tv");
    
for(auto p: m){
    cout<<p.first<<" "<<p.second<<endl;
}
if(m.find("tv") != m.end()){
    cout<<"found"<<endl;
}
else {
    cout<<"not found";
}

}