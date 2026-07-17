class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        int a = 1;
        int temp = n;
        int count = 0;
        while(count != 32) {
            if((temp & a) == 1 ) {
                ans = ans | 1;
            }
           
           temp = temp >> 1;
           count++;
           if(count == 32) {
            break;
           }
            ans = ans << 1;
        }
        return ans;
        
    }
};
