class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<long long> line(n + 1, 0);
        long long decrement = 0;
        int k = 0;

        for (int i = 0; i < n; ++i) {
            // Ensure we've applied enough total decrement at i
            while (decrement + line[i] < nums[i]) {
                if (k == (int)queries.size()) {
                    return -1;  // No more queries left
                }
                auto& q = queries[k++];
                int L = q[0], R = q[1], val = q[2];
                if (R < i) continue;  // This query doesn't affect position i
                line[max(L, i)] += val;
                line[R + 1] -= val;
            }
            decrement += line[i];
        }

        return k;
    }
};