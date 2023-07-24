class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {

        unordered_map<int,int> mp;

        int crossCount=0;
        int Max=0;

        for(int i=0;i<wall.size();i++){

            int sum=0;
            for(int j=0;j<wall[i].size()-1;j++){

                sum += wall[i][j];
                mp[sum]++;
                Max = max(Max,mp[sum]);
                
            }

        }

        crossCount = wall.size()-Max;

        return crossCount;
    }
};