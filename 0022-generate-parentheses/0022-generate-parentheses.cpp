class Solution {
private:
    void helper(int open, int close, int n, vector<string> &ans,string & temp){
      //base case
      if(open == close && open == n){
        ans.push_back(temp);
        return;
      }
      if(open < n){
        temp+="(";
        helper(open+1, close, n, ans, temp);
        temp.pop_back();
      }
     if(open>close){
        temp+=")";
        helper(open, close+1, n, ans, temp);
        temp.pop_back();
      }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        helper(0,0,n,ans,temp);
        return ans;
    }
};