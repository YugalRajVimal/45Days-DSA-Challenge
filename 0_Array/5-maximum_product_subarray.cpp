class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int prefix=1;
        int suffix=1;
        int maxProduct=INT_MIN;
        for(int i=0;i<n;i++){
            prefix=prefix*nums[i];
            if(prefix > maxProduct){
                maxProduct=prefix;
            }
            if(prefix==0){
                prefix=1;
            }
        }

        for(int i=n-1;i>=0;i--){
            suffix=suffix*nums[i];
            if(suffix > maxProduct){
                maxProduct=suffix;
            }
            if(suffix==0){
                suffix=1;
            }
        }

        return maxProduct;
    }
};