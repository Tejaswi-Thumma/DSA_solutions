class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxi = INT_MIN;
        int p1 = 0;
        int p2 = n-1;
        while(p1 < p2) {
            maxi = max(maxi, (p2 - p1)*min(heights[p1], heights[p2]));
            if(heights[p1] <= heights[p2] ) {
                p1++;
            }
            else {
                p2--;

            }
        }
        return maxi;
        
    }
};
