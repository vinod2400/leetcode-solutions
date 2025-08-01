class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        sort(pizzas.begin(),pizzas.end());
        long long ans = 0;
        int n = pizzas.size();
        int m = n/4;
        if(m==1) return pizzas[n-1];
        if(m==2) return (pizzas[n-1] + pizzas[n-3]);
        int odd = 0, even = 0;
        odd = ceil((double)m / 2);

        even = m - odd;
        int k = n-1;
        for(int i = 0 ; i < odd ; i++){
            ans += pizzas[k];
            k--;
        }
        for(int i = 0; i<even; i++){
            k--;
            ans+=pizzas[k];
            k--;
        }
        return ans;
    }
};