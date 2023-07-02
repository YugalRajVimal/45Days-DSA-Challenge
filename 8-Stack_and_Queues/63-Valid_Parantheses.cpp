#include<stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> bracks;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                bracks.push(s[i]);
            }
            else if(!bracks.empty()){
                if((s[i]==')' && bracks.top()=='(') || (s[i]=='}' && bracks.top()=='{') || (s[i]==']'&& bracks.top()=='[')){
                    bracks.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return bracks.empty();
    }
};