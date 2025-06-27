class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0 , e = nums.size()-1;
        int ans = INT_MAX;
        
        while(s<=e){
            int mid = (s+e)/2;

            if(nums[s] <= nums[mid]){
                ans = min(nums[s],ans);
                s=mid+1;
            } 
            else{
                ans = min(ans,nums[mid]);
                e=mid-1;
            }
        }
        return ans;
    }
};