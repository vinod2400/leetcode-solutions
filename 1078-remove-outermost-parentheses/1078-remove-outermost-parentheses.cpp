class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int cnt = 0;
        int n = s.length();
        for(int i = 0; i<n ;i++){
            if(s[i]=='('){
                cnt++;
            }
            else
            cnt--;

            if(cnt > 1 || (cnt == 1 && s[i] == ')'))
            ans+=s[i];
        }
        return ans;
    }
};