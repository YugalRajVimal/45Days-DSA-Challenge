class Solution {
public:
    vector<int> gridIllumination(int n, vector<vector<int>>& lamps, vector<vector<int>>& queries) {

        vector<int> ans;

        if(n==0){
            return ans;
        }

        unordered_map<int,int> x;
        unordered_map<int,int> y;
        unordered_map<int,int> diag1;
        unordered_map<int,int> diag2;
        set<pair<int,int>> s;

        for(int i=0;i<lamps.size();i++){
            
            if(!s.count({lamps[i][0],lamps[i][1]})){
                x[lamps[i][0]]++;
                y[lamps[i][1]]++;
                diag1[lamps[i][0]+lamps[i][1]]++;
                diag2[lamps[i][0]-lamps[i][1]]++;
                s.insert({lamps[i][0],lamps[i][1]});
            }
            
        }

        for(int i=0;i<queries.size();i++){
            if(x[queries[i][0]]>0 || y[queries[i][1]]>0 || diag1[queries[i][0]+queries[i][1]] > 0 || diag2[queries[i][0]-queries[i][1]]>0){
                ans.push_back(1);

                for(int j=-1;j<=1;j++){
                    for(int k=-1;k<=1;k++){
                        int qx = queries[i][0] + j;
                        int qy = queries[i][1] + k;

                        if(qx>=0 and qx<n and qy>=0 and qy<n and s.count({qx,qy})){
                            s.erase({qx,qy});
                            x[qx]--;
                            y[qy]--;
                            diag1[qx+qy]--;
                            diag2[qx-qy]--;
                        }
                    }
                }
            }
            else{
                ans.push_back(0);
            }
        }
        return ans;
    }
};