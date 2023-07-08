class Solution {
public:

    void helper(string arr[],string digits,int index,vector<string> *ans,string temp){
        if(index>=digits.size()){
            ans->push_back(temp);
            cout<<temp<<endl;
            return;
        }

        int dig=digits[index]-48;
        
        for(int i=0;i<arr[dig].length();i++){
            temp=temp+arr[dig][i];
            helper(arr,digits,index+1,ans,temp);
            temp=temp.substr(0,temp.length()-1);
        }
        
        return;
    }

    vector<string> letterCombinations(string digits) {
        if(digits.length()==0){
            return {};
        }
        string arr[10] = { "0",   "1",   "abc",  "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

        vector<string> ans;
        string temp="";
        helper(arr,digits,0,&ans,temp);
        return ans;
    }
};