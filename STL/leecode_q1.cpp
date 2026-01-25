#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char, int> mp;

        for (char c : s)
            mp[c]++;

        for (char c : t) {
            mp[c]--;
            if (mp[c] < 0)
                return false;
        }
    return true;
    }

};

int main(){

    Solution obj;
    string a="nishant";
    string b= "pershant";
    cout<<obj.isAnagram(a,b);
}