class Solution {
public:
    long long dp[100001][2];
    long long helper(vector<int>& nums, int i,bool flag){
        
        if(i >= nums.size()) return 0 ;
           
        if(dp[i][flag] != -1) return dp[i][flag];

        long long skip = helper(nums,i+1, flag);
        
        long long take = helper(nums, i + 1, !flag) + (flag ? nums[i] : -nums[i]);

        
        return dp[i][flag] = max(skip,take); 
    }
public:
    long long maxAlternatingSum(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
       return helper(nums,0,true);
    }
};