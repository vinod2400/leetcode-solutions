class Solution {
private:
    int solve(string &text1, string &text2,vector<vector<int>>& dp,int i,int j){
        if(i < 0 || j < 0)
        return 0;

        if( dp[i][j] != -1)
        return dp[i][j];

        if(text1[i] == text2[j])
        return dp[i][j] =1+ solve(text1,text2,dp,i-1,j-1);
        else
        return dp[i][j]=max(solve(text1,text2,dp,i,j-1),solve(text1,text2,dp,i-1,j));
        }
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();
        vector<vector<int>> dp(m,vector<int>(n,-1));
       return  solve(text1,text2,dp,m-1,n-1);
    }
};