class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        for(int i=0; i<n; i++) {
            if(i>= 1 && nums[i] == nums[i-1]) {
                continue;

            }
            int p1 = i+1;
            int p2 = n-1;
            while(p1 < p2 ) {
                if(nums[p1] + nums[p2] + nums[i] == 0 ) {
                    ans.push_back({nums[i], nums[p1], nums[p2]});
                    int temp = nums[p1];
                    int temp2 = nums[p2];
                    while(p1 < p2 && nums[p1] == temp) {
                        p1++;
                    }
                    while(p1 < p2 && nums[p2] == temp2) {
                        p2--;
                    }

                }
                else if(nums[p1] + nums[p2] + nums[i] < 0) {
                    p1++;
                }
                else {
                    p2--;
                }
            }
            
        }
        return ans;
        
    }
};
