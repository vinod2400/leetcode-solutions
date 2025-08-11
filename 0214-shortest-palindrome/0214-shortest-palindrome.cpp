class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size();
        string str = s;
        string original = s;
        reverse(s.begin(),s.end());
        str += "*" + s;
        vector<int> lps(2*n+1);
        int i = 0, j =1;
        while(j<str.size()){
            if(str[i]==str[j]){
                lps[j]=i+1;
                i++;j++;
            }
            if(j==str.size())
            break;
            if(str[i] != str[j]){
                if(i>0)
                i = lps[i-1];
                else{
                    lps[j]=0;j++;
                }
            }
        }
        int diff = n-lps[2*n];
        original = s.substr(0,diff)+original;
        return original;
    }
};