class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int majorityElm=nums[0];
        int majorityElmCount=1;
        int count=1;

        int i=1;
        for(;i<nums.size();i++){

            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                if(majorityElmCount<count){
                    majorityElmCount=count;
                    majorityElm=nums[i-1];
                }
                count=1;
            }
        }

        if(majorityElmCount<count){
            majorityElmCount=count;
            majorityElm=nums[i-1];
        }
        
        return majorityElm;
    }
};