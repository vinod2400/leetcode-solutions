class Solution {
public:
    const int MOD = 1e9 + 7;

    long long modPow(long long base, long long exp) {
        long long result = 1;
        base %= MOD;
        while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * base) % MOD;
            }
            base = (base * base) % MOD;
            exp /= 2;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        long long t = n / 2;
        long long ans;

        if (n % 2 == 0) {
            ans = modPow(20, t);
        } else {
            ans = (modPow(20, t) * 5) % MOD;
        }

        return ans;
    }
};
