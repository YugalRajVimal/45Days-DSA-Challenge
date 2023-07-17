class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
          int i = 0, j = 0, count = 0, m = 0;
        
        while (j < nums.size()){
            
            if(nums[j] > right)
            {
                m = 0;
                i = j + 1;
            
            }
            
            else if(nums[j] >= left && nums[j] <= right)
            {
                m = j - i + 1; 
            }
            
            count += m;
            j++;
            
        }
        
       return count;
    }
};