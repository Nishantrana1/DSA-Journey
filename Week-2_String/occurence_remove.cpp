#include<iostream>

using namespace std;

class Solution{
    public:
    string removeoccurence(string s, string part){
        while(s.length()>0&& s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;

    }
};

int main(){

    Solution s;
    string str="aabcabcbaabcdabc";
    string str2="abc";
    string result=s.removeoccurence(str,str2);

    cout<<result;
}