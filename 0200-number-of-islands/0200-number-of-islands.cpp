class Solution {
private:
    void bfs(int row, int col , vector<vector<int>> &vis, vector<vector<char>>& grid){
        vis[row][col] = 1;
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int,int>> q;
        q.push({row,col});
      
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};

         while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];

                if (nr>=0 && nr<m && nc>=0 && nc<n && 
                    grid[nr][nc] == '1' && !vis[nr][nc]) {
                    vis[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }
 
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        for(int i = 0; i<m ;i++){
            for(int j = 0; j <n ;j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    count++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return count;
    }

};