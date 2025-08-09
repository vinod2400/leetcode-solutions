class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        if(n<0) return false;
        if(n % 2 != 0) return false;

        int bits[32];
        int idx = 0;
        for(int i = 31; i>=0; i--){
            bits[idx++] = (n>>i) & 1;
        }
        int ones = 0;
        for(int j = 0; j < 32; j++){
            if(bits[j] == 1) ones++;
        }
        return ones == 1;
    }
};