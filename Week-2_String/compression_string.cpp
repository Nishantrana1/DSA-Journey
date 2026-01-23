#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();

        int ind =0;
        for(int i=0;i<n;i++){
            char ch=chars[i];
            int fre=0;
            while(i<n&& ch==chars[i]){
                i++;
                fre++;
                
            }
            if(fre==1){
                chars[ind++]=ch;
                
            }
            else {
                chars[ind++]=ch;
               
                string str=to_string(fre);
                for(char val:str){
                    chars[ind++]=val;
                   
            }
            } i--;

        }
        return ind;
    }
};


int main(){
    Solution s;
    vector<char> chars={'a','a','a','b','b'};
    int n=chars.size();
    n=s.compress(chars);
    for(int i=0;i<n;i++){

        cout<<chars[i]<<" ";
    }
}