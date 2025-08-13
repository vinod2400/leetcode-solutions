class Solution {
public:
    bool canJump(vector<int>& nums) {
        int zeros = 0;
        for(int i = 0 ;i <nums.size(); i++){
            if(nums[i] == 0) zeros++;
        }
        if(zeros == 0) return true;
        int maxIndex = 0;
        int n = nums.size();
        for(int i= 0; i<n-1 ;i++){
            if(i>maxIndex) return false;
            maxIndex = max(maxIndex, i+nums[i]);
            
        }
        if(maxIndex>=n-1)return true;
        return false;
    }
};