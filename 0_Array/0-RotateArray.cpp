class Solution {
public:

    void rotateSubArray(vector<int>& nums,int start,int end){
                int i=start;
                int j=end;
                while(i<j){
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                    i++;
                    j--;
                }
            return;
        }

    void rotate(vector<int>& nums, int k) {

        //O(log n) Accepted Solution
        if(nums.size()<2 || k>nums.size()){
            for(int i=0;i<k;i++){
                int lastElm=nums[nums.size()-1];
                nums.pop_back();
                nums.insert(nums.begin(),lastElm);
            }
            return;
        }

        rotateSubArray(nums,0,nums.size()-1);
        rotateSubArray(nums,0,k-1);
        rotateSubArray(nums,k,nums.size()-1);


        return;
    }
};