class Solution {
public:

    void helper(vector<int>& candidates,int index,int targetSum,vector<vector<int>> &combinations,vector<int> &temp){
        if(index==candidates.size()){
            if(targetSum==0){
                combinations.push_back(temp);
            }
            return;
        }
        

        if(targetSum >= candidates[index]){
            temp.push_back(candidates[index]);
            helper(candidates,index,targetSum-candidates[index],combinations,temp);
            temp.pop_back();

        }
        helper(candidates,index+1,targetSum,combinations,temp);
        
        return;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> combinations;
        vector<int> temp;
        helper(candidates,0,target,combinations,temp);

        return combinations;
    }
};