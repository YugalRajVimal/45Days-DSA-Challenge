class Solution {
public:
    int singleNumber(vector<int>& nums) {

        //O(n)
        int x=0;
        for(int i=0;i<nums.size();i++){
            x=x^nums[i];
        }

        return x;

        // O(log n)
        /*
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-1;i=i+2){
            if(nums[i]!= nums[i+1]){
                return nums[i];
            }
        }
        return nums[nums.size()-1];
        */
    }
};