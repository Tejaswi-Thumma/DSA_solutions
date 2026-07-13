class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //  sort(nums.begin(), nums.end());
        
        // bool checking = false;
        // for(int i=0;i<nums.size()-1;i++) {
        //     if(nums[i] == nums[i+1]) {
        //         checking = true;
        //         break;
        //     }

        // }
        // return checking;

        unordered_map<int,int>mpp;
        for(int i=0; i<nums.size(); i++) {
            mpp[nums[i]]++;
            if(mpp[nums[i]]  >1) {
                return true;
            }
        }
        return false;
        
    }
};