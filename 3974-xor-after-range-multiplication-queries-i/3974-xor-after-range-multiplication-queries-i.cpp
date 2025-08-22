class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int m = queries.size();
        const int MOD = 1e9 + 7;
        int t = 0;
        while(t<m){
            int idx = queries[t][0];
            int end = queries[t][1];
            int step = queries[t][2];
            for(int i = idx; i <= end; i+=step){
                nums[i] = (1LL*nums[i]*queries[t][3])%MOD;
            }
            
            t++;
        }
        int ans = 0;
        for (int x : nums) {
            ans ^= x;
        }
        return ans;
    }
};