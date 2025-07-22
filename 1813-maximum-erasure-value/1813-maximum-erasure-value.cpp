class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l = 0, r = 0;
        int n = nums.size();
        if(n==1) return nums[0];
        unordered_map<int,bool> mpp;
        int max_sum = 0;
        int subarr_sum = 0;
        while(r<n){
            if(mpp.count(nums[r])){
                subarr_sum-=nums[l];
                mpp.erase(nums[l]);
                l++;
            }
            else{
                subarr_sum+=nums[r];
                mpp[nums[r]]=true;
                r++;
                max_sum = max(max_sum,subarr_sum);
            }
        }
        return max_sum;
    }
};