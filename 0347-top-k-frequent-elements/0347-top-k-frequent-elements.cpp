class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i = 0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int n = nums.size();
        vector<vector<int>>buckets(n+1);
        for(auto i : mp){
            buckets[i.second].push_back(i.first);
        }
        vector<int> ans;
        for(int j = buckets.size()-1; j>=0 ;j--){
            if(k==0)break;
            if( !buckets[j].empty() ){
                for(int val : buckets[j]) {   // push each element
                    ans.push_back(val);
                    k--;
                    if(k == 0) break; // stop once we have k elements
                }
            }
        }
        return ans;
    }
};