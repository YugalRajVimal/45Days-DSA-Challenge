class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();

        int *leftMax=new int[n];
        int *rightMin=new int[n+1];

        int currMax=0;
        for(int i=0;i<n;i++){
            currMax=max(currMax,arr[i]);
            leftMax[i]=currMax;
        }

        int currMin=INT_MAX;
        rightMin[n]=currMin;
        for(int i=n-1;i>=0;i--){
            currMin=min(arr[i],currMin);
            rightMin[i]=currMin;
        }

        int countChunks=0;

        for(int i=0;i<n;i++){
            if(leftMax[i]<=rightMin[i+1]){
                countChunks++;
            }
        }
    
    return countChunks;
    }
};