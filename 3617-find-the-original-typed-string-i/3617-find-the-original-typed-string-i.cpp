class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.length();
        int ans = 1;
        for(int i = 0; i<n ;){
            int j = i;
            while(j<n && word[j] == word[i]){
                j++;
            }
            int len = j-i;
            if(len>1){
                ans += len-1;
            }
            i = j;
        }
        return ans;
    }
};