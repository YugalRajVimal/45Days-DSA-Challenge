class Solution {
public:

    void helper(vector<int>& candidates,int index,int targetSum,vector<vector<int>> &combinations,vector<int> &temp){
        if(targetSum==0){
            combinations.push_back(temp);
            return;
        }

        for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1]){
                continue;
            }
            if(candidates[i]>targetSum){
                break;
            }
            temp.push_back(candidates[i]);
            helper(candidates,i+1,targetSum-candidates[i],combinations,temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> combinations;
        vector<int> temp;
        helper(candidates,0,target,combinations,temp);

        return combinations;
    }
};