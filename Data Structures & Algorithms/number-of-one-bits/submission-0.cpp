class Solution {
public:
    int hammingWeight(uint32_t n) {
        int a = 1;
        int count = 0;
        while(n != 0) {
        if((n & a ) == 1) {
            count++;
            
        }
       n = n >> 1;
        }
        return count;

    }
};
