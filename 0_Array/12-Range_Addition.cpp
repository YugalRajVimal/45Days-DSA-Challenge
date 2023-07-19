class Solution {
public:
    /**
     * @param length: the length of the array
     * @param updates: update operations
     * @return: the modified array after all k operations were executed
     */
    vector<int> getModifiedArray(int length, vector<vector<int>> &updates) {
        // Write your code here
        vector<int> ans(length,0);

        for(int i=0;i<updates.size();i++){
            int sI=updates[i][0];
            int eI=updates[i][1];
            int inc=updates[i][2];

            for(int i=sI;i<=eI;i++){
                ans[i]=ans[i]+inc;
            }
        }

        return ans;
    }

};