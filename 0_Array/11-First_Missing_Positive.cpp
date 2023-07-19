class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int i=0;
        while(i<nums.size()){
            if(nums[i]==(i+1) || nums[i]<=0 || nums[i]>=nums.size() || nums[i]==nums[nums[i]-1]){
                i++;
            }
            else{
                int temp=nums[nums[i]-1];
                nums[nums[i]-1]=nums[i];
                nums[i]=temp;
            }
        }

        i=0;
        while(i<nums.size()){
            if(nums[i] != (i+1)){
                return i+1;
            }
            i++;
        }

        return nums.size()+1;
    }
};