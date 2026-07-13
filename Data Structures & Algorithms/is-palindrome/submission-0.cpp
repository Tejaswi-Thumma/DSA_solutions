class Solution {
public:
    bool isPalindrome(string s) {
        int p1 = 0;
        int p2 = s.length() - 1;
        while(p1 <= p2) {
            if(s[p1] >= 'a' && s[p1] <= 'z' || s[p1] >= 'A' && s[p1] <= 'Z' || s[p1]>= '0' && s[p1] <= '9') {

                if(s[p2] >= 'a' && s[p2] <= 'z' || s[p2] >= 'A' && s[p2] <= 'Z' || s[p2]>= '0' && s[p2] <= '9') {
                    if(s[p1]>= '0' && s[p1] <= '9') {
                        if(s[p1] == s[p2]) {
                            p1++;
                            p2--;
                        }
                        else {
                            return false;
                        }
                    }
                    else {
                        s[p1] = tolower(s[p1]);
                        s[p2] = tolower(s[p2]);
                        if(s[p1] == s[p2]) {
                            p1++;
                            p2--;
                        }
                        else {
                            return false;
                        }
                    }
                }
                else {
                    p2--;
                }

            }
            else {
                p1++;
            }
        }
        return true;
    }
};
