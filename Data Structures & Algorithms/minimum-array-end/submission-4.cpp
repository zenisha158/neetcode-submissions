class Solution {
public:
    long long minEnd(int n, int x) {
        long long ans = x;
        long long add = n - 1; 
        
        int bit = 0;
        while (add > 0) {
            // FIX: Use 'ans' (which is long long) instead of 'x' (int)
            // to safely check bits beyond position 31.
            if (((ans >> bit) & 1) == 0) { 
                if (add & 1) {
                    ans |= (1LL << bit);
                }
                add >>= 1;
            }
            bit++;
        }

        return ans;
    }
};