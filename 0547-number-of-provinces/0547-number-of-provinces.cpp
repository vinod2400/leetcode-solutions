class Solution {
private:
   void dfs(int node,vector<int> &vis,vector<vector<int>>& isConnected){
    vis[node] = 1;
     for (int j = 0; j < isConnected.size(); j++) {
            if (isConnected[node][j] == 1 && vis[j] == 0) {
                dfs(j,vis, isConnected);
            }
        }
   }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n,0);
        
        int ans =0;
        for(int i =0 ; i<n; i++){
            if(!vis[i]){
                ans++;
                dfs(i,vis,isConnected);
            }
        }
     return ans;
    }
};