class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<2){
            return nums.size();
        }

        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        int min=INT_MAX;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<min){
                min=nums[i];
            }
        }

        map<int,int>::iterator itr=mp.begin();

        int maxCount=INT_MIN;
        int count=1;
        int prev=itr->first;
        itr++;
        while(itr != mp.end()){
            if((itr->first)==(prev+1)){
                count++;
            }
            else{
               maxCount = max(maxCount,count);
               count=1;
            }
            prev=itr->first;
            itr++;
        }

        maxCount = max(maxCount,count);

        return maxCount;
    }
};