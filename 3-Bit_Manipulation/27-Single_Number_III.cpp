class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unsigned int xy = 0;
        for(int i=0;i<nums.size();i++){
            xy = xy ^ nums[i];
        }

        xy &= -xy;

        vector<int> result = {0, 0};

        for(int i=0;i<nums.size();i++){
            if(xy & nums[i]) {
                result[0] = result[0] ^ nums[i];
            }
            else{
                result[1] = result[1] ^ nums[i];
            } 
        }

        return result;
    }
};