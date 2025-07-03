class Solution {
private:
    string solve(string &s){
        string res = "";
        for(char ch : s){
            res+=ch;
            char next = (ch=='z') ? 'a' : (ch+1);
            res += next;
        }
        return res;
    }
public:
    char kthCharacter(int k) {
        string str = "a";
        while(str.length()<k){
            str = solve(str);
        }
        return str[k-1];
    }
};