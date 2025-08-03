class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int sum = nums[0];
        for(int i = 0; i<nums.size()-1; i++){
            ans.push_back(sum);
            sum+=nums[i+1];
        }
        ans.push_back(sum);
        return ans;
    }
};