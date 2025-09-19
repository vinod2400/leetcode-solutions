class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans = INT_MAX;
        int n = tasks.size();
        for(int i = 0; i < n; i++){
            int time = tasks[i][0] + tasks[i][1];
            ans = min(ans,time);
        }
        return ans;
    }
};