class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> res(nums.size(),0);

        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        
        int left=0;
        int right=nums.size()-1;
        int index=nums.size()-1;
        while(left<=right){
            if(nums[left]>=nums[right]){
                res[index]=nums[left];
                left++;
                index--;
            }
            else{
                res[index]=nums[right];
                right--;
                index--;
            }
        }
        return res;
    }
};