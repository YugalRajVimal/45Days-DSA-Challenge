class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        
        int currMax=0;
        int count=0;

        for(int i=0;i<arr.size();i++){
            currMax= max(arr[i],currMax);
            if(i == currMax){
                count++;
            }
        }

        return count;
    }
};