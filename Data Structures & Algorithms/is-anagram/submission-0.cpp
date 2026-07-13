class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if(s == t) {
        //     return true;
        // }
        // return false;
        if(s.length() != t.length()) {
            return false;
        }

        vector<int>v1(26);
        vector<int>v2(26);

        for(int i=0; i<s.length(); i++) {
            v1[s[i] - 'a']++;
            v2[t[i] - 'a']++;
        }
        for(int i=0; i<26; i++) {
            if(v1[i] != v2[i]) {
                return false;

            }
        }
        return true;
        
    }
};
