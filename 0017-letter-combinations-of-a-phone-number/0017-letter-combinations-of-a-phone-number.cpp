class Solution {
public:
    void helper(int i, string& digits,vector<string> &ans,string &temp,unordered_map<char,string>& mp){
        if(i == digits.size()){
            ans.push_back(temp);
            return;
        }
        string str = mp[digits[i]];
        for(int j = 0 ; j<str.size() ;j++){
            temp.push_back(str[j]);
            helper(i+1,digits,ans,temp,mp);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        if(n==0) return {};
        unordered_map<char,string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        vector<string> ans;
        string temp;
        helper(0,digits,ans,temp,mp);
        return ans;
    }
};