class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int j = 0, ans = 0;

        for(int i = 0; i<n; i++){
            while(nums[i]-nums[j] >1)
            j++;

            if(nums[i] - nums[j] ==1)
            ans = max(ans,i-j+1);
        }
        return ans;
    }
};