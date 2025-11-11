class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string temp = "";
        for(int i = 0; i<n ;i++){
            if(isalnum(s[i])){
               temp+=tolower(s[i]);

            }
            
        }
        int i = 0, j = temp.length()-1;
        while(i<j){
            if(temp[i] != temp[j]) return false;
            else{
                i++;j--;
            }
        }
        return true;
    }
};