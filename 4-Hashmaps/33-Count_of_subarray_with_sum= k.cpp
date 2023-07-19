class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        map<int,int> mp;
        int preSum = 0;
        int count = 0;

        mp[0] = 1;
        for (int i = 0; i < n; i++) {
            preSum =preSum + nums[i];
            int remove = preSum - k;
            count =count + mp[remove];
            mp[preSum] =mp[preSum] + 1;
        }
        
        return count;
    }
};