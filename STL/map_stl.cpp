#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> m;
    m["tv"]=100;
    m["washing machine"]=200;
    m["phone"]=300;
    m["oven"]=400;

    m.insert({"camera",500});
    m.emplace("laptop",450);

    map<string,int>::iterator it;
    for(it=m.begin();it != m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<" count for laptop "<<m.count("laptop")<<endl;

}