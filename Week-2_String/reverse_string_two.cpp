#include<iostream>
#include<algorithm>
using namespace std;


class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        string ans;
        for(int i=0;i<n;i++){
        string word;
        
     
        while(i<n&& s[i] != ' '){
            word+=s[i];
            i++;
        }
        
        reverse(word.begin(),word.end());
        if(ans.length()==0){
            ans+=word;
            continue;
        }
        if(word.length()>0){
            ans+=" "+word;
        }}
     
     return ans;
    }
};

int main(){
Solution s;
string str="hello my name is nishant";
cout<<s.reverseWords(str)<<endl;
}