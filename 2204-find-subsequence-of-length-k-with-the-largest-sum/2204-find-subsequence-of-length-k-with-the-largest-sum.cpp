class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
         vector<pair<int, int>> temp;
        for (int i = 0; i < nums.size(); i++) {
            temp.push_back({nums[i], i});
        }
        sort(temp.begin(), temp.end());

        vector<pair<int, int>> ans(temp.end() - k, temp.end());
        sort(ans.begin(), ans.end(), [](pair<int, int>& a, pair<int, int>& b) {
        return a.second < b.second;
    });
        vector<int> res;
        for (int i = 0; i < ans.size(); i++) {
    res.push_back(ans[i].first); 
}

        return res;
    }
};