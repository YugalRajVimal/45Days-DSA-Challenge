class Solution {
public:
    bool binarySearch(vector<int>& nums,int startIndex,int endIndex, int target){
        if(startIndex>endIndex){
            return false;
        }

        int mid=(startIndex+endIndex)/2;
        if(nums[mid]==target){
            return true;
        }
        else if(nums[mid]<target){
            return binarySearch(nums,mid+1,endIndex,target);
        }
        return binarySearch(nums,startIndex,mid-1,target);
    }

    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int peakIndex=n-1;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                peakIndex=i;
                break;
            }
        }

        if(peakIndex==n-1){
            return binarySearch(nums,0,n-1,target);
        }

        if(target==nums[n-1]){
            return n-1;
        }
        else if(target>nums[n-1]){
            return binarySearch(nums,0,peakIndex,target);
        }
        return binarySearch(nums,peakIndex+1,n-1,target);
    }
};