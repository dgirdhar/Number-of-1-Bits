class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        uint32_t startNum = 1;
        
        for (int i = 1; i <= 32; ++i) {
            if ((startNum & n) > 0) {
                res++;
            }
            startNum = startNum << 1;
        }
        return res;
    }
};
