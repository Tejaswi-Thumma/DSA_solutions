class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        // int n = strs.size();
        // for(int j=0; j<n; j++) {
        //     bool check = 0;
        //     string b = strs[j];
        //     sort(b.begin(), b.end());
        //     for(int i=0; i<ans.size(); i++) {
        //         string a = ans[i][0];
        //         sort(a.begin(), a.end());
        //         if(a == b) {
        //             ans[i].push_back(strs[j]);
        //             check = 1;
        //         }
                

        //     }
        //     if(check == 0) {
        //         ans.push_back({strs[j]});
        //     }

        // }

        unordered_map<string, vector<string>>mpp;
        for(int i=0; i<strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            mpp[s].push_back(strs[i]);
        }
        for(auto &p :mpp) {
            ans.push_back(p.second);
        }
        return ans;
        
    }
};
