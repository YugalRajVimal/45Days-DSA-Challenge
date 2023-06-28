#include<climits>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()<2){
            return nums[0];
        }
        int minNeg=INT_MIN;
        int largestSum=0;
        int cs=0;
        for (int i=0;i<nums.size();i++){
            if(nums[i]>minNeg){
                    minNeg=nums[i];
                }
            cs=cs+nums[i];
            if(cs<0){
                cs=0;
            }
            largestSum=max(cs,largestSum);
        }
        
        if(largestSum<=0){
            return minNeg;
        }
        return largestSum;
    }
};