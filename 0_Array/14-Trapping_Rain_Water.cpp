class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int *leftMax=new int[n];
        int *rightMax=new int[n];

        int lMax=height[0];
        leftMax[0]=lMax;
        for(int i=1;i<n;i++){
            if(height[i]>lMax){
                leftMax[i]=height[i];
                lMax=height[i];
            }
            else{
                leftMax[i]=lMax;
            }
        }

        int rMax=height[n-1];
        rightMax[n-1]=rMax;
        for(int i=n-2;i>=0;i--){
            if(height[i]>rMax){
                rightMax[i]=height[i];
                rMax=height[i];
            }
            else{
                rightMax[i]=rMax;
            }
        }

        int waterCollected=0;
        for(int i=0;i<n;i++){
            waterCollected += (min(leftMax[i],rightMax[i]) - height[i]);
        }

    return waterCollected;
    }
};