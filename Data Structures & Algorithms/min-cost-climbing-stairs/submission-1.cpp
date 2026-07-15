class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<vector<int>>dp(n, vector<int>(2, 0));
        dp[0][0] = cost[0];
        dp[0][1] = cost[0];
        if(n == 1) {
            return cost[0];
        }
        dp[1][0] =  cost[0];
        dp[1][1] = cost[1];
        if(n == 2) {
            return min(dp[1][1], dp[1][0]);
        }
        for(int i=2; i<n; i++) {
            dp[i][0] = dp[i-1][1];
            dp[i][1] =min( cost[i] + dp[i-1][0] , cost[i] + dp[i-1][1]);
        }
        return min(dp[n-1][0], dp[n-1][1]);
    }
};
