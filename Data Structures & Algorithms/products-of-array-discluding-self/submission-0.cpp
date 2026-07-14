class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>p_sum(n+1);
        vector<int>s_sum(n+1);
        p_sum[0] = 1;
        s_sum[n] = 1;
        for(int i=0; i<n; i++) {
            p_sum[i+1] = p_sum[i]*nums[i];
            s_sum[n-1-i] = s_sum[n-i]*nums[n-1-i];
        }
        vector<int>ans(n);
        for(int i=0; i<n; i++) {
            ans[i] = p_sum[i]*s_sum[i+1];
        }
        return ans;

    }
};
