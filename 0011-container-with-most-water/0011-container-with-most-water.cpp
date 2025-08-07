class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n-1;
        int ans = INT_MIN;
        while(i<j){
            int area = (min(height[i],height[j]))*(j-i);
            ans = max(ans,area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};