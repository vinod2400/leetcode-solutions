class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& routes, int src, int dest, int k) {
        vector<long long> cost(n, LLONG_MAX);
    cost[src] = 0;

    for (int i = 0; i <= k; ++i) {
        vector<long long> temp = cost;
        for (const auto& r : routes) {
            int u = r[0], v = r[1], w = r[2];
            if (cost[u] != LLONG_MAX && cost[u] + w < temp[v]) {
                temp[v] = cost[u] +  w;
            }
        }
        cost = temp;
    }

    return cost[dest] == LLONG_MAX ? -1 : cost[dest];
    }
};