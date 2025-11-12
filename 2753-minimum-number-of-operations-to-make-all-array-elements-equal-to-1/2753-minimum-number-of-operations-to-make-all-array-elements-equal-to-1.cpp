class Solution {
public:
    int minOperations(vector<int>& nums) {
        //atleast a 1
        int n = nums.size();
        int ones = 0;
        for(auto i: nums){
            if(i==1)ones++;
        }
        if(ones>0) return (n-ones);
        //no 1
        int minLen = INT_MAX;
        for(int i = 0;i<n; i++){
            int g = nums[i];
            for(int j =i+1; j<n ;j++){
                g = gcd(g,nums[j]);
                if(g == 1){
                    minLen = min(minLen,j-i+1);
                    break;
                }
            }
        }
        if(minLen==INT_MAX) return -1;
        else{
            return (minLen-1)+(n-1);
        }
    }
};