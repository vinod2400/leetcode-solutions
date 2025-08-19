class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0, consecutive = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                consecutive ++;
                ans+=consecutive;
            }else{
                consecutive=0;
            }
        }
        return ans;
    }
};