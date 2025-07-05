class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(auto i : arr){
            mpp[i]++;
        }
        int ans = -1;
        for(auto x : mpp){
            if(x.second == x.first)
            ans = max(ans,x.first);
        }
        return ans;
    }
};