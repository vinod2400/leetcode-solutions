class Solution {
public:
    long long maxWeight(vector<int>& p) {
        sort(p.begin(), p.end()); 
        int n = p.size();
        int m = n / 4; 
        int odd = (m + 1) / 2; 
        int even = m - odd; 
        
        long long sum = 0;
        int l = n - 1;
        
        
        for (int i = 0; i < odd; i++) {
            sum += p[l]; 
            l--; 
        }
        
       
        for (int i = 0; i < even; i++) {
            l--;
            sum += p[l]; 
            l--; 
        }
        
        return sum; 
    }
};