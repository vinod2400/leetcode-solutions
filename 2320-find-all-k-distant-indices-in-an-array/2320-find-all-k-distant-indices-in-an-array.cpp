class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ans;
        vector<int> temp;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == key)
            temp.push_back(i);
        }
        for(int i = 0; i<nums.size(); i++){
            for(int j = 0; j<temp.size() ;j++){
                if(abs(i-temp[j])<=k){
                    ans.push_back(i);
                    break;
                }
                else
                continue;
            }
        }

        return ans;
    }
};