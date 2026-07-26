class Solution {
public:
    bool isAlphaNumeric(char ch){
        if(ch>='a'&&ch<='z'||(ch>='0'&&ch<='9')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int n=s.size();
        int s1=0,e=n-1;
        while(s1<=e){
            if(isAlphaNumeric(tolower(s[s1]))&&isAlphaNumeric(tolower(s[e]))){
                if(tolower(s[s1])!=tolower(s[e])) return false;
                s1++;
                e--;
            }
            else if(isAlphaNumeric(tolower(s[s1]))) e--;
            else if(isAlphaNumeric(tolower(s[e]))) s1++;
            else {
                s1++;
                e--;
            }
        }
        return true;
    }
};
