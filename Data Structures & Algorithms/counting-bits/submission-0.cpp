class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>count(n+1, 0);
        count[0] = 0;
        if(n == 0) {
            return count;
        }
        if(n == 1) {
            count[1] = 1;
            return count;
        }
        count[1] = 1;
        for(int i=2; i<=n; i++) {
            int a = 1;
            int temp = i;

            while(temp != 0) {
                if((temp & a ) == 1) {
                    count[i]++;
                }
                temp = temp >> 1;
            }

        }
        return count;
        
        
    }
};
