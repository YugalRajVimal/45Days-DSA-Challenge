class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());

        int n=nums.size()/3;
        int count=1;

        int i=1;
        for(;i<nums.size();i++){

            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                if(count>n){
                    ans.push_back(nums[i-1]);
                }
                count=1;
            }
        }

        if(count>n){
            ans.push_back(nums[i-1]);
        }
        
        return ans;
    }
};