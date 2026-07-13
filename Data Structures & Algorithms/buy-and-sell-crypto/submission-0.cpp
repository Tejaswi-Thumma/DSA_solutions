class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxi = 0;
        int curr_min = prices[0];
        for(int i=0; i<n; i++) {
            maxi = max(maxi, prices[i] - curr_min);
            curr_min = min(curr_min, prices[i]);
        }

    return maxi;
        
    }
};
